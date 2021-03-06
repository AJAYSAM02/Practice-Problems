#include <stdio.h>
#include <stdlib.h>
typedef unsigned long long ull;
#define QUOTIENT (1000000007)
#define MAX_M (31313)
#define MAX_N (1500)
typedef struct { int u, v, c; } edge;
edge es[MAX_M];
int p[MAX_N+1];
int ccs;
int cmp(const void * arg1, const void * arg2) {
return ((const edge *)arg1)->c - ((const edge *)arg2)->c;
}
void dsu_init(int n) {
int i;
for ( i=1; i <= n; ++i )
p[i] = i;
}
int dsu_set(int x) {
if ( p[x] == x ) return x;
return p[x] = dsu_set(p[x]);
}
void dsu_union(int x, int y) {
int px = dsu_set(x);
int py = dsu_set(y);
if ( px == py ) return;
p[px] = py;
ccs -= 1;
}
int main() {
ull acc;
int i,t,n,m;
scanf("%d", &t);
while ( t-- ) {
scanf("%d %d", &n, &m);
dsu_init(n);
for ( i=0; i < m; ++i )
scanf("%d %d %d", &es[i].u, &es[i].v, &es[i].c);
qsort(es, m, sizeof(*es), cmp);
for ( i=0, acc=1, ccs=n; ccs > 1; ++i )
if ( dsu_set(es[i].u) != dsu_set(es[i].v) ) {
acc = (acc * es[i].c) % QUOTIENT;
dsu_union(es[i].u, es[i].v);
}
printf("%llu\n", acc);
}
return EXIT_SUCCESS;
}

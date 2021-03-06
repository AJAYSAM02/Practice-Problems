#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_M (1000000)
#define MAX_N (1000000)
typedef unsigned long long ull;
typedef struct { int x, y, c; } edge;
edge es[MAX_M];
int p[MAX_N+1];
int tk[MAX_N+1];
int ccs,i;
int cmp(const void * arg1, const void * arg2) {
return ((const edge *)arg1)->c - ((const edge *)arg2)->c;
}
void dsu_init(int n) {
for (i=1; i <= n; ++i )
p[i] = i;
}
int dsu_set(int x) {
if ( p[x] == x )
return x;
return p[x] = dsu_set(p[x]);
}
void dsu_union(int x, int y) {
int px = dsu_set(x);
int py = dsu_set(y);
if ( px == py )
return;
p[px] = py;
ccs -= 1;
}
int main() {
ull k,sum;
int i,n,m,a,b,c,acc;
scanf("%d %d %llu", &n, &m, &k);
if ( n-1 > k ) {
printf("-1\n");
return EXIT_SUCCESS;
}
dsu_init(n);
for ( i=0, ccs=n; i < m; ++i ) {
scanf("%d %d %d", &a, &b, &c);
es[i] = (edge) { .x = a, .y = b, .c = c };
dsu_union(a,b);
}
if ( ccs > 1 ) {
printf("-1\n");
return EXIT_SUCCESS;
}
dsu_init(n);
qsort(es, m, sizeof(*es), cmp);
for ( i=sum=0; i < m; ++i )
if ( dsu_set(es[i].x) != dsu_set(es[i].y) )
dsu_union(es[i].x, es[i].y), tk[i] = true, sum += es[i].c;
for ( i=m-1, acc=0; i >= 0 && sum > k; --i )
if ( tk[i] )
sum -= (es[i].c-1), ++acc;
printf("%d\n", acc);
return EXIT_SUCCESS;
}

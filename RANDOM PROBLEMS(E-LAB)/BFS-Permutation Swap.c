#include <stdio.h>
#include <stdbool.h>
#define MAX_N 101000
int P[MAX_N], Q[MAX_N];
int Id[MAX_N], sz[MAX_N];
int find( int x ) {
if( x != Id[x] ) Id[x] = find(Id[x]);
return Id[x];
}
void Union( int x, int y ) {
x = find(x), y = find(y);
if( x == y ) return;
if( sz[x] >= sz[y] ) {
Id[y] = x;
sz[x] += sz[y];
}
else {
Id[x] = y;
sz[y] += sz[x];
}
}
int main( void ) {
int T;
scanf("%i", &T);
while( T-- ) {
int n, m, i;
scanf("%i %i", &n, &m);
for( i = 1; i <= n; i++ )
scanf("%i", &P[i]);
for( i = 1; i <= n; i++ ) {
int q;
scanf("%i", &q);
Q[q] = i;
}
for( i = 1; i <= n; i++ )
Id[i] = i, sz[i] = 1;
for( i = 1; i <= m; i++ ) {
int u, v;
scanf("%i %i", &u, &v);
Union(u, v);
}
bool isPossible = true;
for( i = 1; i <= n; i++ ) {
int p = P[i];
if( find(i) != find(Q[p]) )
isPossible = false;
}
puts( isPossible ? "YES" : "NO" );
}
return 0;
}

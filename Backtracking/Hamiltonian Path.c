#include <stdio.h>
int n;
int checkhamiltonian(int a[n][n],int v,int count,int visited[n])
{
if (count == n)
{
return 1;
}
int i;
visited[v] = 1;
for (i = 0; i < n; i++)
{
if (a[v][i] == 1 && visited[i] == 0)
{
visited[i] = 1;
if (checkhamiltonian(a,i,count + 1,visited))
{
return 1;
}
visited[i] = 0;
}
} return 0;
}
int main()
{
int t,i,j,m,x,y;
scanf("%d", &t);
while (t > 0)
{
t--;
scanf("%d%d", &n, &m);
int a[n][n],visited[n];
for (i = 0; i < n; i++)
{
visited[i] = 0;
for (j = 0; j < n; j++)
{
a[i][j] = 0; }
}
for (i = 0; i < m; i++)
{ scanf("%d%d", &x, &y);
x--;
y--;
a[x][y] = 1;
a[y][x] = 1;
} int result;
for (i = 0; i < n; i++)
{
result = checkhamiltonian(a,i,1,visited);
for (j = 0; j < n; j++)
{ visited[j] = 0; }
if (result == 1)
{
break;
}
} printf("%d\n", result);
}
return 0;
}

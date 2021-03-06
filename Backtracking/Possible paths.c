#include <stdio.h>
int count(int g[25][25], int u, int v, int k, int N, int dp[100][100][100])
{
if(k <= 0)
return 0;
if(u == v && k == 0)
return 1;
if((k == 1) && g[u][v] == 1)
return 1;
if(dp[u][v][k] != -1)
return dp[u][v][k];
int i;
int sum = 0;
for(i = 0; i < N; i++)
{
if(g[u][i] == 1)
sum += count(g, i, v, k - 1, N, dp);
}
dp[u][v][k] = sum;
return dp[u][v][k];
}
int main() {
//code
int T;
scanf("%d", &T);
while(T--)
{
int N;
scanf("%d", &N);
int g[25][25];
int i, j, k;
int dp[100][100][100];
for(i = 0; i < N; i++)
{
for(j = 0; j < N; j++)
{
scanf("%d", &g[i][j]);
for(k = 0; k < 100; k++)
{
dp[i][j][k] = -1;
}
}
}
int u, v;
scanf("%d %d %d", &u, &v, &k);
int ans = count(g, u, v, k, N, dp);
printf("%d\n", ans);
}
return 0;
}

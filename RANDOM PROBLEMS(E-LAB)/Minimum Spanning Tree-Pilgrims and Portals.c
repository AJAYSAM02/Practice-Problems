#include<stdio.h>
#define INF 100000000000000
int x[200],done[200];
long long dist[200][200],graph[200][200];
void floyd (int n)
{
int i, j, k;
for (i = 0; i < n; i++)
for (j = 0; j < n; j++)
dist[i][j] = graph[i][j];
for (k = 0; k < n; k++)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (dist[i][k] + dist[k][j] < dist[i][j])
dist[i][j] = dist[i][k] + dist[k][j];
}
}
}
}
int main()
{
int n,m,a,b,i,j;
FILE *p=stdin;
int t;
long long c;
fscanf(p,"%d",&t);
while(t--)
{
int z=0,k;
long long ans=0;
fscanf(p,"%d%d%d",&n,&m,&k);
for(i=0; i<n; i++)
for(j=0; j<n; j++)
graph[i][j]=0;
while(m--)
{
fscanf(p,"%d %d %lld",&a,&b,&c);
graph[a-1][b-1]=c;
graph[b-1][a-1]=c;
}
for(i=0; i<n; i++)
for(j=0; j<n; j++)
{
if(graph[i][j]==0&&i!=j)
graph[i][j]=INF;
}
floyd(n);
x[0]=1;
x[1]=0;
dist[0][0]=INF;
for(i=0;i<n;i++)
done[i]=0;
done[0]=1;
for(i=1;i<k;i++)
{
int ans1=0,ans2=0;
for(j=1;j<=x[0];j++)
{
for(z=1;z<k;z++)
if(!done[z]&&dist[x[j]][z]<dist[ans1][ans2])
ans1=x[j],ans2=z;
}
x[++x[0]]=ans2;
done[ans2]=1;
ans+=dist[ans1][ans2];
}
printf("%lld\n",ans);
}
return 0;
}

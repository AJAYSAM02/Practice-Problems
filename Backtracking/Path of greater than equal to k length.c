#include <stdio.h>
int grp[50][50],
visi[50];int dfs(int sum,int k,int v,int V)
{
int i;
if(sum>=k) return 1;
for(i=0;i<V;i++)
{
if(grp[v][i]!=0 && visi[i]==0)
{
visi[i]=1;
if(dfs(sum+grp[v][i],k,i,V)==1)
return 1;
visi[i]=0;
}
} return 0;
}
int main()
{
int t;scanf("%d",&t);
while(t--)
{
int i,j,e,v,k,s,t,w;
scanf("%d %d %d",&v,&e,&k);
for(i=0;i<v;i++)
{
for(j=0;j<v;j++)
grp[i][j]=0;
}
for(i=0;i<e;i++)
{
scanf("%d %d %d",&s,&t,&w);
grp[s][t]=w;
grp[t][s]=w;
}
for(i=0;i<v;i++) visi[i]=0;
visi[0]=1;
printf("%d\n",dfs(0,k,0,v));
}
return 0;
}

#include<stdio.h>
int a[20][20],reach[20],n;
void dfs(int v){
int i;
reach[v]=1;
for(i=1;i<=n;i++)
if(a[v][i]&&!reach[i]){
printf("%d->%d\n",v,i);
dfs(i);
}
}
int main(){
int i,j,count=0;
//printf(“\nEnter no of vertices : “);
scanf("%d",&n);
for(i=1;i<=n;i++)
for(j=1;j<=n;j++){
reach[i]=0;
a[i][j]=0;
}
//printf(“\nEnter adjacency matrix : \n”);
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
dfs(1);
for(i=1;i<=n;i++)
if(reach[i])
count++;
if(count==n)
printf("Graph is connected");
else
printf("Graph is disconnected");
return 0;
}

#include<stdio.h>
int G[50][50],x[50];
void next_color(int k){
int i,j;
x[k]=1;
for(i=0;i<k;i++){
if(G[i][k]!=0 && x[k]==x[i])
x[k]=x[i]+1;
}
}
int main(){
int n,e,i,j,k,l;
scanf("%d",&n);
scanf("%d",&e);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
G[i][j]=0;
for(i=0;i<e;i++){
scanf("%d %d",&k,&l);
G[k][l]=1;
G[l][k]=1;
}
for(i=0;i<n;i++)
next_color(i);
for(i=0;i<n;i++)
{
if(x[i]==1)
printf("Vertex[%d] : Red\n",i+1);
if(x[i]==2)
printf("Vertex[%d] : Blue\n",i+1);
if(x[i]==3)
printf("Vertex[%d] : Yellow\n",i+1);
}
return 0;
}

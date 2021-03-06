#include<stdio.h>
int n,m;
int x[1000000],y[1000000],w[1000000],dp[1000000][100];
int getMin(int a,int b){
if(b==-1)
return a;
if(a==-1)
return b;
return a<b?a:b;
}
int getWeight(int a, int b){
int i;
for(i=0;i<m;i++){
if(x[i]==a && y[i]==b){
return 1;
}else if(x[i]==b && y[i]==a){
return 1;
}
}
return 0;
}
int main(void){
int t;
scanf("%d",&t);
while(t--){
int i,j,mask;
scanf("%d%d",&n,&m);
for(int i=0;i<m;i++)
scanf("%d%d",&x[i],&y[i]);
int end=(1<<n);
for(i=0;i<end;i++){
for(j=0;j<n;j++)
dp[i][j]=0;
}
for(i=0;i<n;i++){
dp[1<<i][i]=1;
}
for(i=0;i<n;i++)
dp[0][i]=1;
for(mask=1;mask<end;mask++){
for(i=0;i<n;i++){
if(!(mask&(1<<i))) continue;
int temp=mask-(1<<i);
for(j=0;j<n;j++){
if(!(temp&(1<<j))) continue;
int weight=getWeight((i+1),(j+1));
if(weight!=0 && dp[temp][j]!=0){
dp[mask][i]=1;
}
}
}
}
int flag=1;
for(i=0;i<end;i++){
if(dp[end-1][i]==1){
flag=0;
break;
}
}
if(flag==0)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}

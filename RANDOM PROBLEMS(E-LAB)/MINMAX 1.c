#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int compare2units(const void*a,const void*b){
return (*(unsigned int*)a - *(unsigned int*)b);
}
int main()
{
int n,k,i;
unsigned int x[100001];
unsigned int j,minunfair;
if(scanf("%d",&n)!=1)return 1;
if(scanf("%d",&k)!=1)return 1;
for(i=0;i<n;i++) if (scanf("%d",x+i)!=1) return 1;
if(k==1) return 0;
qsort(x,n,sizeof(int),compare2units);
minunfair=0x7fffffff;
i=0;
j=k-1;
while(j<n){
if (x[j]-x[i]<minunfair) minunfair=x[j]-x[i];
i++;
j++;
}
printf("%u\n",minunfair);
return 0;
}

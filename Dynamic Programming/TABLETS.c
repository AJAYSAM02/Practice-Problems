#include <stdio.h>
int main()
{
int j,dif,n,a[10],med[10]={0},x,sum=0,i;
scanf("%d",&n);
x=0;
a[0]=0;
for( i=1 ; i<=n ; i++)
{
scanf("%d",&a[i]);
dif=a[i]-a[i-1];
if(dif > 0)
med[i]=med[i-1]+1;
else if(dif == 0)
med[i]=1;
else
{
if(med[i-1]==1)
{
med[i]=1;
for( j=i-1; j>=1; j--)
{
if(a[j]-a[j+1] >0 && med[j]<=med[j+1])
{
sum+=1;
med[j]=med[j+1]+1;
}
else break;
}
}
else
med[i]=1;
}
sum+=med[i];
}
printf("%d",sum);
return 0;
}

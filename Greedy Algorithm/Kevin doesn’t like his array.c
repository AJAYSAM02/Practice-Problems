#include <stdio.h>
int max(int a,int b)
{
int k;
k=(a>b?a:b);
return k;
}
int main()
{
int n,i,count=0,a[100005]={0},b[100005]={0},c[100005]={0},C=0,B=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[a[i]]++;
B=max(B,b[a[i]]);
if(i&&(a[i]==a[i-1]))
{
++count;
c[a[i]]++;
C=max(C,c[a[i]]);
}
}
printf("%d",max((count+1)/2,C));
return 0;
}

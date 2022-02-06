#include <stdio.h>
int main()
{
int n , a[50] , i , j , k , ans[3] , P = -1;
float s;
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n-2; i++)
for(j=i+1; j<n-1; j++)
for(k=j+1; k<n; k++)
{
s = ( a[i]+a[j]+a[k] ) / 2.0;
if((s-a[i])>0 && (s-a[j])>0 && (s-a[k])>0 && (s*2)>P)
{
P = (int) s * 2; ans[0] = a[i]; ans[1] = a[j]; ans[2] = a[k];
}
}
if ( P == -1 ) printf("%d",P);
else printf("%d %d %d",ans[0],ans[1],ans[2]);
return 0;
}

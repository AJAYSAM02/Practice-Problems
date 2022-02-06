#include <stdio.h>
int main()
{
int n , k , a[10] , i;
scanf("%d%d",&n,&k);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
int max = a[0];
for(i=0; i<n; i++)
if(a[i] > max)
{
max = a[i];
a[i] = a[0];
a[0] = max;
}
for(i=0; i<n; i++)
printf("%d ",a[i]);
return 0;
}

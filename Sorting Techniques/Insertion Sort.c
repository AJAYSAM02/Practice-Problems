#include <stdio.h>
int main()
{
int n , a[10] , i , j , k , temp ;
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=1; i<n; i++)
{
if (a[i] < a[i-1])
{
temp = a[i];
for (j=0; j<i; j++)
if (a[j] > a[i])
break;
for (k=i; k>=j; k--)
a[k] = a[k-1];
a[j] = temp;
}
for (j=0; j<n; j++)
printf("%d ",a[j]);
printf("\n");
}
return 0;
}

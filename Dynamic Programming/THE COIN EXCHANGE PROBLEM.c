#include <stdio.h>
int count(int arr[], int m, int n)
{
if (n == 0) return 1;
if (n < 0 || m <= 0) return 0;
return count(arr,m-1,n) + count(arr,m,n-arr[m-1]);
}
int main()
{
int n , m , a[10] , i;
scanf("%d%d",&n,&m);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
printf("%d",count(a,m,n));
return 0;
}

#include <stdio.h>
int isPrime (int n)
{
int i;
for (i=2; i<n/2; i++)
if (n%i==0)
return 0;
return 1;
}
int main()
{
int t;
scanf ("%d",&t);
while (t--)
{
int n , m , count = 0 , i;
scanf ("%d",&n);
for (i=5; i<=n; i++)
if (isPrime(i))
if (isPrime(i-2))
count++;
printf("%d\n",count);
}
return 0;
}

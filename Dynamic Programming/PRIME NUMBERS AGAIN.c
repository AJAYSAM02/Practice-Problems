#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
int i;
for(i=2; i<n; i++)
if(n%i==0 && pow(i,i)!=n)
return 0;
return 1;
}
int isPrimatic(int n)
{
if ( n == 1) return 0;
if ( isPrime(n) )
return 1;
return 2;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
printf("%d\n",isPrimatic(n));
}
return 0;
}

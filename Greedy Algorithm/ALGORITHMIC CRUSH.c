#include <stdio.h>
int main()
{
long long int A[361];
int n , i , t;
scanf("%d %d", &n , &t);
while(t--)
{
int a , b , k;
scanf("%d %d %d", &a, &b, &k);
for(i=0; i<n; i++)
if(i >= (a-1) && i <= (b-1))
A[i] += k;
}
int max = 0;
for(i=0; i<n; i++)
if(A[i] > max)
max=A[i];
printf("%d", max);
return 0;
}

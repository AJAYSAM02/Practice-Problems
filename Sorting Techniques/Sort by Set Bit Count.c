#include <stdio.h>
int countBits(int n)
{
int count = 0;
while(n)
{
if(n%2)
count++;
n /= 2;
}
return count;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n, a[10], i, j, temp;
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n-1; i++)
for(j=0; j<n-i-1; j++)
if(countBits(a[j]) < countBits(a[j+1]))
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
for(i=0; i<n; i++)
printf("%d ",a[i]);
printf("\n");
}
return 0;
}

#include <stdio.h>
int main()
{
int n, a[20], i, Q;
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
scanf("%d",&Q);
while(Q--)
{
int q, sum=0, count=0;
scanf("%d",&q);
for(i=0; i<n; i++)
if(a[i] <= q)
{
sum += a[i];
count += 1;
}
printf("%d %d\n",count,sum);
}
return 0;
}

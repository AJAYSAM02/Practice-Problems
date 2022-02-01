#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n, a[100], i, arr[1000]={0};
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n; i++)
arr[a[i]] += 1;
int maxFreq = 10;
while(maxFreq--)
{
for(i=0; i<1000; i++)
if(arr[i] == maxFreq)
while(arr[i]--)
printf("%d ",i);
}
printf("\n");
}
return 0;
}

#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n, a[10], i, ans = 0;
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n-1; i++)
ans += abs(a[i]-a[i+1]);
printf("%d\n",ans);
}
return 0;
}

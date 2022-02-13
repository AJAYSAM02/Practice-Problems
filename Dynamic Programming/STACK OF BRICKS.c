#include <stdio.h>
int main()
{
int t; scanf("%d",&t);
while(t--)
{
int n, a[10], i;
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
int ans = 1000;
for(i=0; i<n; i++)
if(a[i]==999 && a[i+1]==1)
ans++;
else if(a[i]==999 && a[i-1]==1)
ans--;
printf("%d\n",ans);
}
return 0;
}

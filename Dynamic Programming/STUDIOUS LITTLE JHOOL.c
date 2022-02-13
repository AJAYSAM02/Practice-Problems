#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n, ans = -1, x, y;
scanf("%d",&n);
for(x=0; x<n; x++)
for(y=0; y<n; y++)
if((12*x + 10*y) == n)
ans = x + y;
printf("%d\n",ans);
}
return 0;
}

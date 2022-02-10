#include <stdio.h>
int main()
{
int t; scanf("%d",&t);
while(t--)
{
int n, ans = -1;
scanf("%d",&n);
if(n==1)
goto end;
ans = n/7; n = n%7;
ans += n/5; n = n%5;
ans += n/3; n = n%3;
ans += n/2; n = n%2;
ans += n; end:
printf("%d\n",ans);
}
return 0;
}

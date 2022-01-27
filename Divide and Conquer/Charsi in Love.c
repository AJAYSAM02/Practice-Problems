#include <stdio.h>
#include<math.h>
int isDesp(int n)
{
int i, flag = 0;
for(i=1; i<500; i++)
if((i*(i+1)/2)==n)
flag = 1;
return flag;
}
int main()
{
int n, i, flag=0;
scanf("%d",&n);
for(i=1; i<n/2; i++)
{
if(isDesp(i) && isDesp(n-i))
flag = 1;
}
if(flag)
printf("YES");
else
printf("NO");
return 0;
}

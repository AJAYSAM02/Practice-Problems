#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,b,g;
scanf("%d %d %d",&n,&b,&g);
if (abs(b-g) > 1)
printf("Little Jhool wins!\n");
else
printf("The teacher wins!\n");
}
return 0;
}

#include <stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,n;
scanf("%d",&n);
scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
printf("%d %d \n%d %d ",(a*e+b*g),(a*f+b*h),(c*e+d*g),(c*f+d*h));
return 0;
}

#include <stdio.h>
int main()
{
int n=0,i=0,j=0,k=0;
char a[30];
scanf("%d",&n);
for(;i<n;i++)
{
scanf("%s",a);
for(;a[k]!='\0';k++)
{
if(a[k]!=a[k-1])
{
printf("%c",a[k]);
}
}
k=0;
printf("\n");
}
return 0;
}

#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
while (n--)
{
char s[10];
scanf("%s",s);
char temp[] = "Vino\0";
if ( strcmp(s,temp) == 0 )
{
printf("Vino is exist");
break;
}
}
if (!++n)
printf("The Entered Name is not in the Directory");
return 0;
}

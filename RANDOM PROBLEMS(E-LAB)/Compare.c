#include <stdio.h>
#include<string.h>
int main()
{
char a[30],b[30];
scanf("%s%s",a,b);
if(strcmp(a,b)==0)
printf("Entered strings are equal.");
else
printf("Entered strings are not equal.");
return 0;
}

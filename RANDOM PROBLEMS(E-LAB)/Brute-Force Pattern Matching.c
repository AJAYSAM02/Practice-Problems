#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
char str[50],s[50];
int i,j,k,l,sl,eq;
scanf("%[^\n]%*c",str);
printf("Text: %s\n",str);
//fgets(s, MAX, stdin);
scanf("%[^\n]%*c",s);
printf("Pattern: %s\n",s);
l=strlen(str);
sl=strlen(s);
if(strcmp(str,s)==0)
{
printf("Pattern starts at posn 1");
}
for(i=0;i<l;i++)
{
eq=0;
if(str[i]!=s[0])
{
continue;
}
else
{
for(j=i,k=0;j<i+sl,k<sl;j++,k++)
{
if(str[j]!=s[k])
{
eq=-1;
break;
}
}
}
if (eq==0 && k>=sl)
{
printf("Pattern starts at posn %d",i+1);
break;
}
}
return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
char str[20];
scanf("%s",str);
int i,c=0;
for(i=0; i<strlen(str); i++)
if(str[i]=='[')
c++;
if(c==1)
{
int a = (int) str[0]-48;
while(a--)
for(i=2; str[i]!=']'; i++)
printf("%c",str[i]);
printf("\n");
}
else if(c==2)
{
int a = (int) str[0]-48;
char temp[10]; int j=-1;
for(i=2; str[i+1]!='['; i++)
temp[++j] = str[i];
int b = (int) str[i]-48;
i+=2;
int temp_i = i;
while(b--)
{
for(i=temp_i; str[i]!=']'; i++)
temp[++j] = str[i];
}
while(a--)
printf("%s",temp);
printf("\n");
}
}
return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
int i,j,m,n,count=0,count1=0;
char str[100],sub[100];
scanf("%[^\n]s",sub);
m=strlen(sub);
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;)
{
j=0;
count=0;
while((sub[j]==str[i])&&(sub[j]!='\0'))
{
count++;
i++;
j++;
}
if(count==m)
{
count1++;
count=0;
}
else
i++;
}
printf("\n%d",count1);
return 0;
}

#include<stdio.h>
#include<string.h>
void search(char pat[30],char txt[30])
{
int M=strlen(pat);
int i,j;
int N=strlen(txt);
for( i=0;i<N-M+1;i++)
{
for(j=0;j<M;j++)
if(txt[i+j]!=pat[j])
break;
if(j==M)
printf("Pattern found at index %d \n",i);
}
}
int main()
{
char txt[30],pat[30];
fgets(txt,30,stdin);
fgets(pat,30,stdin);
search(pat,txt);
return 0;
}

#include<stdio.h>
#include<string.h>
void print(char *num, int n)
{
int i;
for ( i = 0 ; i < n ; i++)
printf("%c ", num[i]);
printf("\n");
}
int main()
{
char num[10];
scanf("%s",num);
char *ptr;
char temp;
int i, n=3, j;
for (j = 1; j <= n; j++) {
for (i = 0; i < n-1; i++) {
temp = num[i];
num[i] = num[i+1];
num[i+1] = temp;
print(num, n);
}
}
return 0;
}

#include <stdio.h>
int match(char*, char*);
int main()
{
char a[100], b[100];
int position;
scanf("%[^\n]s", a);
// puts(a);
scanf("%s",b);
position = match(a, b);
if(position!=-1)
printf("Found at location %d\n", position+1);
else
printf("Not found.\n");
return 0;
}
int match(char *a, char *b)
{
int c;
int position = 0;
char *x, *y;
x = a;
y = b;
while(*a)
{
while(*x==*y)
{
x++;
y++;
if(*x=='\0'||*y=='\0')
break;
}
if(*y=='\0')
break;
a++;
position++;
x = a;
y = b;
}
if(*a)
return position;
else
return -1;
}

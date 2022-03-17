#include<stdio.h>
#include<string.h>
int res[1000000];
int Num[7];
int A,H,min;
void add(int *a,int size )
{
int j,temp;
for(j=2;j<=size;j++)
{
temp = a[j] + A;
if(temp >= 10)
temp = temp % 10;
a[j] = temp;
j++;
}
}
void Rotate(int *a,int size)
{
int b[6],i,j,R;
if(H > size)
R = H - size;
else
R = H;
for(i=1;i<=size;i++)
{
b[i] = a[i];
}
for(i=R+1,j=1;i<=size;i++)
{
a[j] = b[i];
j++;
}
for(i=1;i<=R;i++,j++)
{
a[j] = b[i];
}
}
int getnum(int *a,int size)
{
int temp=0,i;
for(i=1;i<=size;i++)
{
temp += a[i];
temp *= 10;
}
return (temp/10);
}
void copy(int *a,int *b,int size)
{
int i;
for(i=1;i<=size;i++)
{
b[i] = a[i];
}
}
void lexico(int *a,int size)
{
int Na = getnum(a,size);
int cp[7];
if( res[Na] == 1)
return;
res[Na] = 1;
if(Na < min)
min = Na;
if(Na == 0)
return;
if(A != 10)
{
copy(a,cp,size);
add(cp,size);
lexico(cp,size);
}
copy(a,cp,size);
Rotate(cp,size);
lexico(cp,size);
}
int main()
{
char s[6],p[7];
int len,i,l,val,T;
scanf("%d",&T);
for(l=0;l<T;l++)
{
scanf("%s",s);
scanf("%d %d",&A,&H);
len = strlen(s);
for(i=0;i<len;i++)
{
Num[i+1] = s[i] - 48;
}
val = getnum(Num,len);
min = val;
lexico(Num,len);
for(i=len-1;i>=0;i--)
{
p[i] = (min%10)+48;
min = min/10;
}
p[len] = '\0';
printf("%s\n",p);
memset(res,0,1000000);
memset(Num,0,7);
}
return 0;
}

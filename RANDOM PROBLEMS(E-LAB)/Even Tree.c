#include <stdio.h>
long long a[200][200],b[200][2],i,j,k,l,m,n;
int main()
{
scanf("%lld %lld",&n,&m);
for(i=1;i<=n;i++) b[i][1]=1;
while(m--)
{
scanf("%lld %lld",&i,&j);
a[i][j]= a[j][i] =1;
b[i][0]++;
b[j][0]++;
}
m=0;
while(1)
{
k=1;
for(i=1;i<=n;i++)
if(b[i][0] == 0)
{
k=0;
if(b[i][1]%2==1) m=-10000;
b[i][0]=-1;
}
for(i=1;i<=n;i++)
if(b[i][0] == 1)
{
k=0;
j=1;
while(a[i][j]==0) j++;
if(b[i][1]%2==0)
{
m++;
a[i][j] = a[j][i] = 0;
b[j][0]--;
b[i][0]=-1;
}
else
{
a[i][j] = a[j][i] = 0;
b[j][0]--;
b[j][1] += b[i][1];
b[i][0]=-1;
}
}
if(k) break;
}
if(m<0) printf("-1\n"); else printf("%lld\n",m);
return 0;
}

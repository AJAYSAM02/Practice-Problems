#include <stdio.h>
int main()
{
int n, k, L[10], T[10], i, j, temp;
scanf("%d%d",&n,&k);
for(i=0; i<n; i++)
scanf("%d%d",&L[i],&T[i]);
for(i=0; i<n-1; i++)
for(j=i+1; j<n; j++)
if(L[i] < L[j])
{
temp = L[i]; L[i] = L[j]; L[j] = temp;
temp = T[i]; T[i] = T[j]; T[j] = temp;
}
int ans = 0;
for(i=0; i<n; i++)
if(T[i]==0)
ans += L[i];
for(i=0; i<n; i++)
{
if(T[i])
{
ans += L[i];
k -= 1;
T[i] = 0;
}
if(!k) break;
}
for(i=0; i<n; i++)
if(T[i])
ans -= L[i];
printf("%d", ans);
return 0;
}

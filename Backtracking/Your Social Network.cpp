#include <iostream>
using namespace std;
int main() {
int t,n,i,j;
cin>>t;
while(t--)
{
cin>>n;
int frien[n];
int relation[n][n];
for(i=1;i<n;i++)
{
for(j=0;j<i;j++)
{
relation[i][j]=-1;
}
}
frien[0]=-1;
for(i=1;i<n;i++)
{
cin>>frien[i];
frien[i]--;
}
for(i=1;i<n;i++)
{
relation[i][frien[i]]=1;
if(i!=1)
{
for(j=0;j<frien[i];j++)
{
if(relation[frien[i]][j]!=-1)
{
relation[i][j] = relation[frien[i]][j] + 1;
}
}
}
}
for(i=1;i<n;i++)
{
for(j=0;j<i;j++)
{
if(relation[i][j]!=-1)
{
cout<<(i+1)<<" "<<(j+1)<<" "<<relation[i][j]<<" ";
}
}
}
cout<<endl;
}
return 0;
}

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
char n[20];
cin>>n;
for(int i=0; i<strlen(n); i++)
{
int count=0;
for(int j=i; j<strlen(n); j++)
if(n[j]%2==0)
count++;
cout<<count<<" ";
}
return 0;
}

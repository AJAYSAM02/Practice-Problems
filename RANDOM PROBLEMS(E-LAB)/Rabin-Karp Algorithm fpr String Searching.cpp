#include <iostream>
#include<cstring>
using namespace std;
void search(char pat[],char txt[])
{
int m=strlen(pat);
int n=strlen(txt);
for(int i=0;i<=n-m;i++)
{
for(int j=0;j<m;j++)
{
if(pat[j]!=txt[i+j])
break;
if(j==m-1)
cout<<"Pattern found at index "<<i<<endl;
}
}
}
int main()
{
char pat[50],txt[50];
cin.getline(txt,20);
cin>>pat;
search(pat,txt);
}

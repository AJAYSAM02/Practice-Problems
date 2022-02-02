#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, m;
cin >> n >> m;
string teach[10], t[10], stud[10];
int num[10];
for(int i=0; i<n; i++) cin>>teach[i];
for(int i=0; i<m; i++)
cin>>t[i]>>stud[i]>>num[i];
sort(teach, teach+n);
for(int i=0; i<n; i++)
{
cout<<teach[i]<<endl;
for(int j=0; j<m; j++)
if(teach[i]==t[j])
{
for(int k=j+1; k<m; k++)
if(t[k]==t[j])
{
string temp = stud[j];
stud[j] = stud[k];
stud[k] = temp;
int tem = num[j];
num[j] = num[k];
num[k] = tem;
}
cout<<stud[j]<<" "<<num[j]<<endl;
}
}
return 0;
}

#include <iostream>
using namespace std;
int main()
{
string a; int b;
int count = 0;
while(cin >> a >> b)
if(b>=50)
count++;
cout<<"Number of the student got pass marks " << count;
return 0;
}

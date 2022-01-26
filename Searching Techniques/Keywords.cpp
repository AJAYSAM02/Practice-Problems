#include <iostream>
using namespace std;
int main()
{
string s[15];
int i = -1;
while (cin)
cin >> s[++i];
string temp = s[--i];
while (i--)
{
if ( s[i] == temp )
{
cout << "Keyword is " << s[i] << endl << "position is " << i+1 ;
break;
}
}
if (!++i)
cout << "Keyword not found";
return 0;
}

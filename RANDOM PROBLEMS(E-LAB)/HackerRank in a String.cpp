#include <bits/stdc++.h>
using namespace std;
int main(){
int q;
cin >> q;
for(int a0 = 0; a0 < q; a0++){
string s;
cin >> s;
string cur = "hackerrank";
int st = 0;
for (int i= 0; i < s.size() && st < cur.size(); i++) {
if (s[i] == cur[st]) {
st++;
}
}
if (st == cur.size()) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
// your code goes here
}
return 0;
}

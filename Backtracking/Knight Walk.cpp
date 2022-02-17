#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
struct pos{
pos(int x0,int y0,int move0){
x=x0;
y=y0;
move=move0;
}
int x;
int y;
int move;
bool vis;
};
int main(){
int T;
cin>>T;
for (int i =0;i<T;i++){
int N,M;
cin>>N;
cin>>M;
int s1,s2,d1,d2;
cin>>s1>>s2>>d1>>d2;
bool vis[N][M];
int xpos[]= {2,2,-2,-2,1,1,-1,-1};
int ypos[]= {1,-1,1,-1,2,-2,2,-2};
for (int j=0;j<N;j++){
for (int k=0;k<M;k++){
vis[j][k]=false;
}
}
queue<pos> q;
pos p0(s1-1,s2-1,0);
q.push(p0);
int count=0;
while (!q.empty()){
pos cur=q.front();
q.pop();
if (cur.x==d1-1&&cur.y==d2-1) {
cout<< cur.move<<endl;
count=1;
break;
}
for (int j=0;j<8;j++){
int xNew=cur.x+xpos[j];
int yNew=cur.y+ypos[j];
if(vis[xNew][yNew]||xNew<0||xNew>=N||yNew<0||yNew>=M) continue;
vis[xNew][yNew]=true;
pos pTemp(xNew,yNew,cur.move+1);
q.push(pTemp);
}
}
if (count==0) cout<<-1<<endl;
}
return 0;
}

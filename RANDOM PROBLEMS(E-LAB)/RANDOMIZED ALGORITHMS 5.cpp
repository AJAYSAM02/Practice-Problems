#include<iostream>
using namespace std;
typedef unsigned int uint_t;
uint_t snoob(uint_t x)
{
uint_t rightOne;
uint_t nextHigherOneBit;
uint_t rightOnesPattern;
uint_t next = 0;
if(x)
{
rightOne = x & -(signed)x;
nextHigherOneBit = x + rightOne;
rightOnesPattern = x ^ nextHigherOneBit;
rightOnesPattern = (rightOnesPattern)/rightOne;
rightOnesPattern >>= 2;
next = nextHigherOneBit | rightOnesPattern;
}
return next;
}
int main()
{
int x;
cin>>x;
cout<<snoob(x);
getchar();
return 0;
}

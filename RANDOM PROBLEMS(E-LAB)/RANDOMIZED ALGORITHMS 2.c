#include <stdio.h>
unsigned int countSetBitsUtil(unsigned int x);
unsigned int countSetBits(unsigned int n)
{
int bitCount = 0; // initialize the result
int i;
for (i = 1; i <= n; i++)
bitCount += countSetBitsUtil(i);
return bitCount;
}
unsigned int countSetBitsUtil(unsigned int x)
{
if (x <= 0)
return 0;
return (x % 2 == 0 ? 0 : 1) + countSetBitsUtil(x / 2);
}
// Driver program to test above functions
int main()
{
// int n = 8;
int n;
scanf("%d",&n);
printf("Total set bit count is %d", countSetBits(n));
return 0;
}

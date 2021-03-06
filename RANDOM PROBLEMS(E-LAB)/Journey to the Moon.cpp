#include <iostream>
#include <vector>
static inline int Count(const std::vector<int> &groups, int head)
{
return -groups[head];
}
static int Find(std::vector<int> &groups, int node)
{
if (groups[node] < 0)
return node;
return (groups[node] = Find(groups, groups[node]));
}
static void Union(std::vector<int> &groups, int a, int b)
{
int parentA = Find(groups, a);
int parentB = Find(groups, b);
if (parentA == parentB)
return;
int countA = Count(groups, parentA);
int countB = Count(groups, parentB);
int newCount = countA + countB;
if (countA > countB) {
groups[parentB] = parentA;
groups[parentA] = -newCount;
} else {
groups[parentA] = parentB;
groups[parentB] = -newCount;
}
}
int main(void)
{
int n, p;
std::cin >> n >> p;
std::vector<int> groups(n, -1);
for (int i = 0; i < p; i++) {
int a, b;
std::cin >> a >> b;
Union(groups, a, b);
}
long long total = 0;
long long prevCount = 0;
for (int i = 0; i < n; i++) {
if (Find(groups, i) == i) {
int count = Count(groups, i);
total += count * prevCount;
prevCount += count;
}
}
std::cout << total << "\n";
}

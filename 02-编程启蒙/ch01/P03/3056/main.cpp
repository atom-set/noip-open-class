#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  // 定义变量
  int a1, a2, n, d, r;

  cin >> a1 >> a2 >> n;

  d = a2 - a1;

  // 等差数列公式 an=a1+(n-1) * d

  r = a1 + (n - 1) * d;

  cout << r << endl;

  return 0;
}
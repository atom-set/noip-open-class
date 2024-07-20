#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  // 定义变量
  double c, f;

  cin >> f;

  c = 5 * (f - 32) / 9;

  printf("%.5f", c);
  return 0;
}
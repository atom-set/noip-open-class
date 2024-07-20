#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  // 定义变量
  int x, ge, shi, bai;

  cin >> x;

  // 求百位
  bai = x / 100;
  x = (x % 100);

  // 求十位
  shi = x / 10;

  x = x % 10;
  // 求个位
  ge = x;

  cout << ge << shi << bai << endl;
  return 0;
}
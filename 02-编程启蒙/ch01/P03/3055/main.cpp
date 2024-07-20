#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  // 定义变量
  int x, y1, y2, y3, y4;

  cin >> x;

  y1 = x / 1000;
  x = (x % 1000);

  y2 = x / 100;
  x = x % 100;

  y3 = x / 10;
  x = x % 10;
  
  y4 = x;

  cout << y1 << " " << y2 << " " << y3 << " " << y4 << endl;

  return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int a;
  int x1, x2, x3;

  cin >> a;

  x1 = a / 100;
  a = a % 100;

  x2 = a / 10;
  a = a % 10;

  x3 = a;

  cout << x3 << x2 << x1;
  return 0;
}
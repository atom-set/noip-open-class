#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  double x, y, total, avg;

  cin >> x >> y;

  total = x * 87 + y * 85;

  avg = total / (x + y);

  printf("%.4f", avg);

  return 0;
}
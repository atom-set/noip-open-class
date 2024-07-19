#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int m, n;
  double money;

  cin >> m >> n;

  money = m - n * 0.8;

  printf("%.2f\n", money);
  
  return 0;
}
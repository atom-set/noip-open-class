#include <cstdio>
#include <iostream>
using namespace std;

int main()
{

  int a, b, c;
  int total;

  cin >> a >> b >> c;
  total = (a + a * b + a * b * c);

  cout << total << endl;
  return 0;
}
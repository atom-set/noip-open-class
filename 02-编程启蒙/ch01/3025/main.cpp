#include <cstdio>
#include <iostream>
using namespace std;

int main()
{

  int n, a, b, c;
  int x;

  cin >> n >> a >> b >> c;
  x = n - (a + b - c);

  cout << x << endl;
  return 0;
}
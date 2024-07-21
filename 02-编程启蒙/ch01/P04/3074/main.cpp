#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  double f;
  int d;
  scanf("%lf", &f);
  scanf("%d", &d);
  printf("%.*lf\n", d, f);

  return 0;
}
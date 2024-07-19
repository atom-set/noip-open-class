#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    long double res;

    cin >> a >> b;

    res = (a * 1.0) / b;

    printf("%.9Lf", res);

    return 0;
}
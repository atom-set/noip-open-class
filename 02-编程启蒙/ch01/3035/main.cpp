#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double r;
    double v;
    double pi = 3.14;

    cin >> r;

    v = 4 * pi * (r * r * r) / 3;

    printf("%.2lf", v);
    return 0;
}
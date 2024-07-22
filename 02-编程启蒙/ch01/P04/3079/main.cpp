#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, x, fx;
    cin >> x >> a >> b >> c >> d;

    fx = a * x * x * x + b * x * x + c * x + d;

    printf("%.7f", fx);
    return 0;
}
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double x, money;
    cin >> x;

    if (x > 20) {
        money = 1.98 * x;
    } else {
        money = 1.68 * x;
    }

    printf("%.2f", money);
    return 0;
}
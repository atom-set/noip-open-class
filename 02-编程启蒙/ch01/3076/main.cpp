#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double x, y, avg;
    double total;

    total = 9.6 * 6;

    x = total - 9.4 * 5;
    y = total - 9.8 * 5;

    avg = (total - x - y) / 4;

    printf("%5.2f", avg);

    return 0;
}
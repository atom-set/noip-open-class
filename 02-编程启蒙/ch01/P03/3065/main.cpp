#include <iostream>
using namespace std;
int main() {
    double r1, r2, s;
    cin >> r1 >> r2;

    s = 1 / ((1 / r1) + (1 / r2));

    printf("%.2f", s);
    return 0;
}
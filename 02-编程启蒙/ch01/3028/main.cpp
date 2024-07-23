#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double r;
    double s1, s2, s3;
    double pi = 3.14159;

    cin >> r;

    s1 = 2 * r;
    s2 = 2 * pi * r;
    s3 = pi * r * r;

    printf("%.4f %.4f %.4f\n", s1, s2, s3);
    return 0;
}
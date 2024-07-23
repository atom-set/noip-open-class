#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double f;
    int d;
    scanf("%lf", &f);
    scanf("%d", &d);
    printf("%.*lf\n", d, f);

    return 0;
}
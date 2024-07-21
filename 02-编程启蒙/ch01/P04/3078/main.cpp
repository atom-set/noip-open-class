#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x, a, y, b;
    cin >> x >> a >> y >> b;

    double z = (b * y - a * x) * 1.0 / (b - a);
    
    printf("%.2f", z);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    double z;
    scanf("%d%d", &x, &y);

    z = (x - 100) * 0.9;
    if (y > 1.1 * z)
        printf("fat");
    else if (y < z * 0.9)
        printf("thin");
    else
        printf("standard");
    return 0;
}

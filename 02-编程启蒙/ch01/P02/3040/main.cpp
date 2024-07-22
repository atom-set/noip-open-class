#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, k;
    int b;
    cin >> n >> k;

    for (b = n; b >= 1; b--) {
        if (b % k == 0)  // 能被K整除
            break;
    }
    cout << b;

    return 0;
}

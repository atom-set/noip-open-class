#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (b % a == 0) {
        cout << b / a;
    } else {
        cout << b / a + 1;
    }
    return 0;
}
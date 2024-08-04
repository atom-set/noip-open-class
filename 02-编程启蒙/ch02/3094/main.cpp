#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int t, n, m;
    cin >> t >> n >> m;

    if (t * m >= n) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
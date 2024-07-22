#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;

    if (int(x) % 2 == 0) {
        cout << "NO";
    }

    if (int(x) % 2 == 1) {
        cout << "YES";
    }

    return 0;
}
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x >= 200) {
        cout << "跳绳达人！";
    }
    if (x < 200) {
        cout << "继续努力！";
    }

    return 0;
}
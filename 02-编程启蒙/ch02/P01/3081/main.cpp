#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;

    string str;

    if (y % 2 == 0) {
        str = "yes";
    }

    cout << str;
    return 0;
}
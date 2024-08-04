#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    char c1, c2, c3, c4, c5;

    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    if (c1 == 'D') sum += 30;
    if (c2 == 'C') sum += 30;
    if (c3 == 'B') sum += 30;
    if (c4 == 'A') sum += 30;
    if (c5 == 'D') sum += 30;

    cout << sum;
    return 0;
}
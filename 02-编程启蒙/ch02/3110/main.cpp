#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a * a > b * c)
        cout << "SQUARE";
    else if (a* a == b * c)
        cout << "SAME";
    else
        cout << "RECTANGLE";
    return 0;
}

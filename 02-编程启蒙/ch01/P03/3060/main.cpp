#include <iostream>
using namespace std;
int main() {
    // 长方体的表面积=（长×宽+宽×高+长×高）×2。
    long long a, b, c, s;
    cin >> a >> b >> c;

    s = (a * b + b * c + a * c) * 2;

    cout << s;
}
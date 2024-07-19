#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    double m, n;
    cin >> m;
    double a, b, c, d, e, f, g, y, h;
    n = m / 3; // 将总数平均分成3份
    // 第一次分钱
    g = n / 2;
    h = n / 2;
    y = n + g + h;
    // 第二次分钱
    d = g / 2;
    f = y / 2;
    e = h + d + f;
    // 第三次分钱
    b = e / 2;
    c = f / 2;
    a = d + b + c;
    cout << a << " " << b << " " << c << endl;
    return 0;
}
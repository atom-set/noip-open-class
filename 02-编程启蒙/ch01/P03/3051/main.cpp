#include <iostream>
using namespace std;
int main() {
    // 定义变量
    double a, b, r, k;

    // 输入
    cin >> a >> b;

    // 求 k
    k = int(a / b);

    // 求 r
    r = a - k * b;
    cout << r;
    return 0;
}
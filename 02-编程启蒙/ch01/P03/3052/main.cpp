#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    // 鸡: 1个头，2个脚
    // 兔: 1个头，4个脚
    // x 头
    // y 脚
    int ji, tu, x, y;
    cin >> x >> y;
    // ji * 1 + tu * 1 = x
    // ji * 2 + tu * 4 = y

    // ji * 2 + tu * 4 = y
    // ji * 4 + tu * 4 = x * 4;
    ji = (x * 4 - y) / 2;

    // ji * 2 + tu * 2 = x * 2
    // ji * 2 + tu * 4 = y
    tu = (y - x * 2) / 2;

    cout << ji << " " << tu << endl;

    return 0;
}
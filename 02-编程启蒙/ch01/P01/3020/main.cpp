#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int price = 10;
    int total = 0;
    int count;

    // 接受输入的小朋友人数
    cin >> count;

    // 将票价 price 元与 count 相乘得到总票价
    total = price * count;

    cout << count << " " << total << endl;
    return 0;
}
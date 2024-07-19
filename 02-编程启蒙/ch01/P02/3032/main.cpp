#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // 定义变量
    float s, h, up, down;
    // 上底
    up = 15;
    // 下底
    down = 25;

    // 求高
    h = 2 * 150 / 15;

    // 计算面积
    s = (up + down) * h / 2;
    printf("%0.2f\n", s);
}
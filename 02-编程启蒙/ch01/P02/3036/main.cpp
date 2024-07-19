#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x;
    int a;
    int b;
    int res;
    cin >> x;

    a = x / 10;
    b = x % 10;

    res = b * 10 + a;

    cout << res;

    return 0;
}
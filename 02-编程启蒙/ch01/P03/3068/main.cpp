#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a1, b1, c1, a2, b2, c2;
    int s;
    scanf("%d:%d:%d", &a2, &b2, &c2);
    scanf("%d:%d:%d", &a1, &b1, &c1);

    s = (a1 * 3600 + b1 * 60 + c1) - (a2 * 3600 + b2 * 60 + c2);

    cout << s;

    return 0;
}

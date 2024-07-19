#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int n = 5;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        x = x * 2;
    }

    cout << x;
    return 0;
}
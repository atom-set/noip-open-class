#include <iostream>
using namespace std;
int main()
{
    double x, y, r;

    cin >> x >> y;

    r = y / x * 100;

    
    printf("%.3f%s", r, "%");
}
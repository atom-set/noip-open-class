#include <iostream>
using namespace std;
int main()
{
    char x;
    int a;
    float b;
    double c;

    cin >> x >> a >> b >> c;

    printf("%c %d %.6f %.6f", x, a, b, c);
    return 0;
}
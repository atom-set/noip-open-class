#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int m;
    cin >> m;
    
    int n1, n2, n3, n4, n5, n6;
    int x;
    
    n1 = m / 100;
    x = m - (100 * n1);

    n2 = x / 50;
    x = x - (50 * n2);

    n3 = x / 20;
    x = x - (20 * n3);

    n4 = x / 10;
    x = x - (10 * n4);

    n5 = x / 5;
    n6 = x - (5 * n5);

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;
    cout << n6 << endl;
    return 0;
}
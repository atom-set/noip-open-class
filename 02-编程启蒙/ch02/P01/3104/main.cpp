#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    char c;
    cin >> x >> c;

    if (x <=1000) {
        z = 8;
    } else {
        y = ((x - 1000) % 500) == 0 ? (x - 1000) / 500 : (x - 1000) / 500 + 1 ;
        z =  8 + y * 4;
    }

    if (c == 'y') {
        z = z + 5;
    }

    cout << z;
    
    return 0;
}
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int s;
    double tb, tw;
    cin >> s;
    tw = s / 1.2;
    tb = s / 3.0 + 23 + 27;
    if (tw < tb)
        cout << "Walk";
    else if (tb < tw)
        cout << "Bike";
    else
        cout << "All";
    return 0;
}

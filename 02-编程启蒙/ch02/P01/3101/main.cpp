#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age > 25) {
        cout << 60 - age + 25;
    } else {
        cout << 25 - age;
    }
    return 0;
}
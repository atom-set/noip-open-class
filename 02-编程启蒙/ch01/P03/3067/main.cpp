#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    printf("%02d:%02d:%02d", x / 3600, (x % 3600) / 60, x % 60);
    return 0;
}
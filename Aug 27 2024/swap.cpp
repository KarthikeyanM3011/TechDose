#include <iostream>
using namespace std;

void swapAB(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

int main() {
    int a = 5, b = 10;
    swapAB(a, b);
    cout << "Swapped a: " << a << ", b: " << b << endl;
    return 0;
}

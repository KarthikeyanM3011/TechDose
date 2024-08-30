#include <iostream>
using namespace std;

bool is_bit_set(int x, int y) {
    return (x & (1 << y)) != 0;
}

int main() {
    int a = 13;
    int b = 2;

    if (is_bit_set(a, b)) {
        cout << "The " << b << "-th bit in " << a << " is set." << endl;
    } else {
        cout << "The " << b << "-th bit in " << a << " is not set." << endl;
    }

    return 0;
}

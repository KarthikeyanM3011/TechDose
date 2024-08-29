#include <iostream>
#include <bitset>
using namespace std;

int usb(int n, int i) {
    return n & ~(1 << i);
}

int main() {
    int n, i;

    cout << "Enter number: ";
    cin >> n;
    cout << "Enter bit position: ";
    cin >> i;

    if (i < 0 || i >= sizeof(n) * 8) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    int r = usb(n, i);
    cout << "Result: " << r << " (Binary: " << bitset<8>(r) << ")" << endl;

    return 0;
}

#include <iostream>
using namespace std;

bool isOdd(int x) {
    return x & 1;
}

int main() {
    int x = 7;
    cout << x << " is " << (isOdd(x) ? "Odd" : "Even") << endl;
    return 0;
}

#include <iostream>
using namespace std;

bool isBS(int n, int b) {
    return n & (1 << b);
}

int main() {
    int n = 29; 
    int b = 3; 

    if (isBS(n, b)) {
        cout << "Bit " << b << " is set." << endl;
    } else {
        cout << "Bit " << b << " is not set." << endl;
    }

    return 0;
}

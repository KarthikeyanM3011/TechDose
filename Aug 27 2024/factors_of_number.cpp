#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> get_divisors(int num) {
    vector<int> divs;
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            divs.push_back(i);
            if (i != num / i) {
                divs.push_back(num / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    return divs;
}

int main() {
    int num = 36;
    vector<int> divs = get_divisors(num);
    for (int d : divs) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 3) {
        cout << 0;
    } else {
        cout << n * (n - 3) / 2;
    }

    return 0;
}

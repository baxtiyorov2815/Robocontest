
#include <iostream>
using namespace std;

int main() {
    long long n, count = 0;
    cin >> n;

    if (n == 0) {
        cout << -1;
        return 0;
    }

    long long a = (n < 0 ? -n : n);

    for (long long i = 1; i <= a / i; i++) {
        if (a % i == 0) {
            count++;

            if (i != a / i) {
                count++;
            }
        }
    }


    if (n > 0) {
        long long i = 1;
        while (i <= a / i && i * i != a) {
            i++;
        }
        if (i * i == a) {
            count++;
        }
    }

    cout << count;

    return 0;
}


#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long power(long long a, long long b) {
    long long res = 1;

    while (b > 0) {
        if (b % 2 == 1)
            res = res * a % MOD;

        a = a * a % MOD;
        b /= 2;
    }

    return res;
}

int main() {
    long long n, k;
    cin >> n >> k;

    cout << power(k + 1, n);

    return 0;
}

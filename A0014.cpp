#include <iostream>

using namespace std;


int main() {
    int t;
    long long n, s=0;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        s = (n%1000000007) * (n%1000000007);
        cout << s % 1000000007 << endl;
        s = 0;
    }
    return 0;
}

// Tn​=n^2−(n−1)^2 = 2n−1

// Sn=T1+T2+T3+⋯+Tn=1+3+5+⋯+(2n−1)=n^2
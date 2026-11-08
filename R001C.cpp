#include <iostream>
using namespace std;


int main(){
    long long n, k, sum=1;
    cin >> n >> k;
    if(n == 0 || k == 0){
        cout << 0;
        return 0;
    };
    long long l = k;
    for(long long i=0; i<n-1; i++){
        sum += l;
        l *= k;
    };
    cout << sum % 1000000007;
    return 0;
}


// n = 3   k = 7
// 1-kun 1
// 2-kun 7
// 3-kun 49



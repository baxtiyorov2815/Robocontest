#include <iostream>
using namespace std;

int main(){
    long long n, res=0, i;
    cin >> n;
    for(i=0; i <= n; i++){
        res += i;
    };
    cout << res;
    return 0;
}
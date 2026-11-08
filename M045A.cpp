#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    while(n > 0){
        if(n % 100 == 13){
            cout << "omadsiz chipta";
            return 0;
        }
        n /= 10;
    };
    cout << "omadli chipta";
    return 0;
}
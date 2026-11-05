#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if(n % 2 == 0){
        cout << "Second player";
    }else{
        cout << "First player";
    };
    return 0;
}
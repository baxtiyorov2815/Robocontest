#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    if(k%n == 0){
        cout << "Yes";
    }else{
        cout << "No";
    };
    return 0;
}
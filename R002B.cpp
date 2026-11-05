#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 400 == 0 || n % 4 == 0 && n % 100 != 0){
        cout << "Kabisa yili";
    }else{
        cout << "Kabisa yili emas";
    };
    return 0;
}
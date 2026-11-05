#include <iostream>

using namespace std;

int main(){
    int a1, a2, a3, a4, a5, a6, a7, needed, res=0;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
    cout << "\n";
    cin >> needed;
    int sum = a1 + a2 + a3 + a4 + a5 + a6 + a7;
    res = (needed - sum <= 0) ? 0 : needed - sum;
    cout << res; 
    return 0;
}
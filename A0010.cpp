#include <iostream>
using namespace std;

int main(){
    int a, b, c, res;
    cin >> a >> b >>c;
    a = (a % 2 == 0) ? a / 2 : a / 2 + 1;
    b = (b % 2 == 0) ? b / 2 : b / 2 + 1;
    c = (c % 2 == 0) ? c / 2 : c / 2 + 1;
    res = a + b + c;
    cout << res;
    return 0; 
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, f;
    cin >> x;
    f = pow(x, 5) + 8*pow(x, 4) - 5*pow(x, 3) + 3*x*x + x - 12;
    cout << f;
    return 0;
}
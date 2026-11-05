#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int ax, ay, bx, by, resx, resy;
        cin >> ax >> ay >> bx >> by;
        resx = 2 * bx - ax;
        resy = 2 * by - ay;
        cout << resx << " " << resy << "\n";
    };
    return 0;
}
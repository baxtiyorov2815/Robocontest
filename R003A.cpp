#include <iostream>

using namespace std;

int main(){
    int n, i=0, j=1, k=1;
    cin >> n;
    while(true){
        if(i == j){
            cout << endl;
            i = 0;
            j ++;
        };
        if(n + 1 == j){
            break;
        };
        cout << k << " ";
        i ++;
        k ++;
    };
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    for(int i=10; i<=num; i++){
        if (i + i%100 == num){
            cout << i << " ";
        };
    }
    return 0;
}
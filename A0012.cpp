#include <iostream>
using namespace std;

int main(){
    int h1, m1, s1, h2, m2, s2, res;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    res = (s2-s1) + (m2-m1)*60 + (h2-h1)*60*60;
    cout << res;
    return 0;
}
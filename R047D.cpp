#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long a, b, c, max_abc = 0, min_abc = 0;
    cin >> a >> b >> c;
    max_abc = max({a, b, c});
    min_abc = min({a, b, c});
    cout << max_abc - min_abc;
    return 0;
}
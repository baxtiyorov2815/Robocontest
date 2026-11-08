#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    char odds[] = {'0', '2', '4', '6', '8'};

    cin >> n;

    string str_n = to_string(n);

    if (str_n.size() % 2 == 0) {
        cout << "NO";
        return 0;
    }

    for (char i : odds) {
        if (str_n.find(i) != string::npos) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
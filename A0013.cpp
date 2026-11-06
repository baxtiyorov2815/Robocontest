
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string n;
    cin >> n;

    int r = 0;

    for (char c : n) {
        r = (r * 10 + (c - '0')) % 86400;
    }

    int h = r / 3600;
    int m = (r % 3600) / 60;
    int s = r % 60;

    cout << h << ":" << setw(2) << setfill('0') << m
         << ":" << setw(2) << setfill('0') << s;

    return 0;
}

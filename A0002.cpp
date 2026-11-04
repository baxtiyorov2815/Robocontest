#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int year;
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << "12/09/";
    } else {
        cout << "13/09/";
    }

    cout << setw(4) << setfill('0') << year;

    return 0;
}
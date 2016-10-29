#include<iostream>
using namespace std;

int main() {
    int exp;
    float base, power;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exp;

    for (power=1;exp != 0;--exp) {
        power *= base;
    }

    cout << "Result = " << power;

    return 0;
}

#include <iostream>
using namespace std;

void qwerty(int n);

void qwerty(int n){
    cout << "Number" << n << ": ";
    while (n != 0) {
        int digit = n % 10;
        cout << digit;
        n /= 10;
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    qwerty(n);
}
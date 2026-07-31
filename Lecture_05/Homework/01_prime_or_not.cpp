#include <iostream>
using namespace std;

void prime(int n) {
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Is Prime";
    } else {
        cout << "Is not Prime";
    }
}

int main() {
    int n;
    cin >> n;

    prime(n);

    return 0;
}
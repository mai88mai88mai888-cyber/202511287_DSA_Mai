#include <iostream>
#include <vector>

using namespace std;

void printFibonacci(int n) {
    long long a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number: ";
    if (!(cin >> n) || n <= 0) return 0;

    printFibonacci(n);

    return 0;
}
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

float sum(const vector<float>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0.0f);
}

int main() {
    vector<float> numbers(4);
    cout << "Enter 4 numbers: ";

    for(float &n : numbers) {
        cin >> n;
    }

    cout << "Sum = " << sum(numbers) << endl;

    return 0;
}
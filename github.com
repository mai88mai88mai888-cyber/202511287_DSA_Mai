#include <iostream>
using namespace std;

int main() {
    int chosenNumber = 7;
    int userGuess;
    int guesses[100];
    int count = 0;

    while (true) {
        cout << "Enter a number: ";
        cin >> userGuess;

        guesses[count] = userGuess;
        count++;

        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        }
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Correct" << endl;
            break;
        }
    }

    cout << "All guesses:" << endl;
    for (int i = 0; i < count; i++) {
        cout << guesses[i] << endl;
    }

    return 0;
}

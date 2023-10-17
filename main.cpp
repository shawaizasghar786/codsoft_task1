
#include <iostream>

using namespace std;

int main() {
    int randomnumber = rand() ;
    int userguess;
    cout << "Guess a number randomly: ";
    cin >> userguess;
    while (userguess != randomnumber) {
        if (userguess < randomnumber) {
            cout << "Your guess is too low." << endl;
        } else {
            cout << "Your guess is too high." << endl;
        }
        cout << "Guess again: ";
        cin >> userguess;
    }
    cout << "Congratulations! You guessed the correct number" << endl;

    return 0;
}
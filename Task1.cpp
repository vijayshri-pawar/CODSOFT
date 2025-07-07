/*CPP Code For Number Gussing Game*/

#include <iostream>
using namespace std;
int main() {
    int FixedNumber = 42; 
    int userGuess;
    cout << "Guess the number between 1 to 100: ";
    while (true) {
        cin >> userGuess;
        if (userGuess < FixedNumber ) {
            cout << "Too low  Try again: ";
        } else if (userGuess > FixedNumber ) {
            cout << "Too high Try again: ";
        } else {
            cout << "Congratulations! You guessed the correct number: " << FixedNumber  << endl;
            break;
        }
    }
    return 0;
}
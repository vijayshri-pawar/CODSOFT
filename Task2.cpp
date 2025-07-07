/*CPP Code For Simple Calculator*/

#include <iostream>
using namespace std;
int main() {
    double num1, num2, result;
    char choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter your choice to +,-,* and /";
    cin >> choice;
    cout << "Enter second number: ";
    cin >> num2;
    switch (choice) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
    return 0;
}
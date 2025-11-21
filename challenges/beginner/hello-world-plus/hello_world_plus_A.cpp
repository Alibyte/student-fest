#include <iostream>
using namespace std;

int main() {
    double result, value;
    char op;

    cout << "Running Calculator (C++)\n";
    cout << "Enter an initial value: ";
    cin >> result;

    while (true) {
        cout << "\nEnter operation (+, -, *, / or q to quit): ";
        cin >> op;

        if (op == 'q') {
            cout << "Final result: " << result << endl;
            cout << "Goodbye!\n";
            break;
        }

        if (op != '+' && op != '-' && op != '*' && op != '/') {
            cout << "Invalid operation.\n";
            continue;
        }

        cout << "Enter next value: ";
        cin >> value;

        switch (op) {
            case '+':
                result += value;
                break;
            case '-':
                result -= value;
                break;
            case '*':
                result *= value;
                break;
            case '/':
                if (value == 0) {
                    cout << "Error: Cannot divide by zero\n";
                    continue;  // keep result unchanged
                }
                result /= value;
                break;
        }

        cout << "Current result: " << result << endl;
    }

    return 0;
}

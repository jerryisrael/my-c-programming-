#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, choice;
    double result;

    cout << "How many numbers? ";
    cin >> n;

    double nums[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums[i];
    }

    cout << "\nChoose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cin >> choice;

    switch (choice) {

        case 1: 
            result = 0;
            for (int i = 0; i < n; i++)
                result += nums[i];
            break;

        case 2: 
            result = nums[0];
            for (int i = 1; i < n; i++)
                result -= nums[i];
            break;

        case 3: 
            result = 1;
            for (int i = 0; i < n; i++)
                result *= nums[i];
            break;

        case 4: 
            result = nums[0];
            for (int i = 1; i < n; i++) {
                if (nums[i] == 0) {
                    cout << "Division by zero not allowed!";
                    return 0;
                }
                result /= nums[i];
            }
            break;

        default:
            cout << "Invalid choice!";
            return 0;
    }

    cout << "Result = " << result;
    return 0;
}
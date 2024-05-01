#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    if (num1 > num2) {
        cout << "First number " << num1 << " is the largest";
    } else {
        cout << "Second number " << num2 << " is the largest";
    }
    return 0;
}


/*   **********************ouput*************************

Take 2 integers input and print the greatest of them

Input 1: a = 5 b = 7

Output 1: second number 7 is the largest.
*/
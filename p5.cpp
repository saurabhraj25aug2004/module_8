#include<iostream>

using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Please Enter Three Sides of a Triangle =  ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "This is an Equilateral Triangle";
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "This is an Isosceles Triangle";
    } else
        cout << "This is a Scalene Triangle";

    return 0;
}

/*   **********************ouput*************************
Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

Input : side1 = 5 side2 = 4 side3 = 4

Output: This is an Isosceles triangle.
*/
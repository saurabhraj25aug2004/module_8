#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Enter marks of the students : ";
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
        cout << "A scores the least marks";

    else if (b <= a && b <= c)
        cout << "B scores the least marks";

    else
        cout << "C scores the least marks";

    return 0;
}

/*   **********************ouput*************************

If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.

Input 1: A = 23 , B = 34 , C  = 71

Output :  A scores the least marks
*/
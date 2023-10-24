// courseID:CIS165-006HY
// name: Aaron Carbonell
// Prof. Wang
// Assignment#4
// Due by 11/14/2019

#include <iostream>
using namespace std;

int main()
{
    // variables
    int m, y, d;
    string magic;

    // user input for month, day, and year
    cout << "Input digit(s) for month: ";
    cin >> m;
    cout << "Input digit(s) for day: ";
    cin >> d;
    cout << "Input digit(s) for year: ";
    cin >> y;
    
    // magic:               true   or   false
    if (m * d == y)
        magic = "magic";
    else
        magic = "not magic";

    // Display output
    cout << m << "/" << d << "/" << y << " is " << magic << endl;

    return 0;
}
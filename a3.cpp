// courseID:CIS165-006HY
// name: Aaron Carbonell 
// Prof. Wang
// Assignment#3
// Due by 10/22/2019

#include <stdio.h>
#include <iostream> 
#include <iomanip> 

using namespace std;

int main()
{
	// Variables for pay 
	const float adTix = 10,
				cdTix = 6,
				Inc = .20;
				
	// string variable 
	string movieN;

	// integers 
	int adlt_tix,
		chld_tix;

	// floats 
	float	Ttl,
			price;

cout << "What is the title of the film? ";
    getline(cin, movieN);

    // program ask's user for adult and child tickets
    cout << "\nEnter (+) number of adult tickets: ";
    cin >> adlt_tix;
    cout << "Enter (+) number of child tickets: ";
    cin >> chld_tix;

    // calculate gross and net profit
    Ttl = (adlt_tix * adTix) + (chld_tix * cdTix);
    price = Ttl * Inc;

    // print outcoume
    cout << setprecision(2) << fixed;
    cout << "\nMovie Title: \"";
    cout << movieN << '\"' <<endl;
    cout << "Adult tickets sold:      " << setw(10);
    cout << adlt_tix;
    cout << "\nChild tickets sold:      " << setw(10);
    cout << chld_tix;
    cout << "\nTotal cost:              $$" << setw(10);
    cout << Ttl;
    cout << "\nGross Box Office Profit: $$" << setw(10);
    cout << price << '\n' <<endl;

	return 0;
}

// courseID:CIS165-006HY
// name: Aaron Carbonell
// Prof. Wang
// Assignment#6
// Due by 11/14/2019

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
                                  // IV = Input-Validation
int main()
{
                                  // constant variables for account & checks
  const double extraCharge =  15,
               cent10      = .10,
               cent8       = .08,
               cent6       = .06,
               cent4       = .04;
  double accountBalance,
         monthlyCharge = 10;
  int checksUsed;
                                  // user input for begginning balacne --> accountBalance
  cout << "\nWhat is the start balance in your account? $";
  cin >> accountBalance;
                                  // IV : Urgent prompt for " if accountBalance < 0 "
  if (accountBalance < 0)
    {cout << "\tURGENT MESSAGE!:",
    cout << " Account is overdrawn";  // Overdrawn
    }
                                  // extraCharge for " if accountBalance < 400 "
  if (accountBalance < 400)
        monthlyCharge += extraCharge;
                                  // user input for checks written --> checks used
  cout << "\nNumber of check written? ";
  cin >> checksUsed;
                                  // IV : Restriction prompt for " if checksUsed < 0  "
  if (checksUsed < 0)
  {
      cout << "Value not accepted.";
      cout << "Restart the instructions,";  // Restart
  }
  else                            // if / else if blocks for checksUsed
  {
    cout << setprecision(2) << fixed;

    if (checksUsed >= 0 && checksUsed < 20)
    {
        monthlyCharge +=
        (checksUsed * cent10);
    }
    else if (checksUsed >= 20 && checksUsed <= 39)
    {
        monthlyCharge +=
        (checksUsed * cent8);
    }
    else if (checksUsed >= 40 && checksUsed <= 59)
    {
        monthlyCharge +=
        (checksUsed * cent6);
    }
    else if (checksUsed >= 60)
    {
        monthlyCharge +=
        (checksUsed * cent4);
    }
                                // Display Output of monthlyCharge &/or extraCharge
    cout << "Bank's service fees for the month are: $";
    cout << monthlyCharge << endl;
  }

  cout << endl
       << endl;

  return 0;
}
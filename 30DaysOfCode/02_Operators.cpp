// NEWTHING= double is an INT untile  you make it double :) eg- 1. double a = 10 is an INT  2. double b = 10.0 is actually a DOUBLE value.

#include <iostream>
using namespace std;
#include <cmath>

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
double tip = meal_cost * (tip_percent / 100.0 );
double tax = meal_cost * (tax_percent / 100.0);
double total = meal_cost + tip + tax;
cout << round(total) << endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
  //  cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}



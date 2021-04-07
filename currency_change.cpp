#include <iostream>

using namespace std;

int main()
{
    int change_amount, balance;
    int dollars, quarters, dimes, nickels, pennies;
    cout << "Enter the change amount in cent: " << endl;

    cin >> change_amount;
    dollars = change_amount / 100;
    balance = change_amount % 100;

    quarters = balance / 25;
    balance = balance % 25;

    dimes = balance / 10;
    balance = balance % 10;

    nickels = balance / 5;
    balance = balance % 5;

    pennies = balance;

    cout << "Your change is as follows: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    
    return 0;
}
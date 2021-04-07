#include <iostream>

using namespace std;

int main()
{
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int change_amount {}, balance {};
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
    cout << "Enter the change amount in cent: " << endl;

    cin >> change_amount;
    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance = balance % quarter_value;

    dimes = balance / dime_value;
    balance = balance % dime_value;

    nickels = balance / nickel_value;
    balance = balance % nickel_value;

    pennies = balance;

    cout << "Your change is as follows: " << endl;
    cout << "dollars   : " << dollars << endl;
    cout << "quarters  : " << quarters << endl;
    cout << "dimes     : " << dimes << endl;
    cout << "nickels   : " << nickels << endl;
    cout << "pennies   : " << pennies << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

const double price_per_room {30.0};
const double tax_rate {0.06};
const int estimate_expiry {30};

int main()
{
    cout << "Welcome to adewole carpet cleaning service" << endl;
    cout << "How many rooms would you like cleaned: ";
    int number_of_rooms {0};
    cin >> number_of_rooms;

    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * tax_rate << endl;
    cout << "=======================================" << endl;
    cout << "Total cost estimate: $" << (price_per_room*number_of_rooms) + (price_per_room*number_of_rooms*tax_rate) << endl;
    cout << "=======================================" << endl;
    cout << "Note: This estimate is valid for " << estimate_expiry << " days" << endl;
    return 0;
}
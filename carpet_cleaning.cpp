#include <iostream>

using namespace std;

const double price_per_large_room {35.0};
const double price_per_small_room {25.0};
const double tax_rate {0.06};
const int estimate_expiry {30};

int main()
{
    cout << "Welcome to adewole carpet cleaning service" << endl;
    cout << "How many small rooms would you like cleaned? ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "How many large rooms would you like cleaned? ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;

    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    double total_small_room = number_of_small_rooms * price_per_small_room;
    double total_large_room = number_of_large_rooms * price_per_large_room;
    double gross_total = total_small_room + total_large_room;

    cout << "Tax: $" << gross_total * tax_rate << endl;
    cout << "=======================================" << endl;
    cout << "Total cost estimate: $" << gross_total + (gross_total*tax_rate) << endl;
    cout << "=======================================" << endl;
    cout << "Note: This estimate is valid for " << estimate_expiry << " days" << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main() {

    cout << "Welcome to Alan's Carpet Cleaning Service" << endl;
    cout << "Please enter the number of small and large rooms you want cleaned (separated by a space): ";
    int small_rooms {0};
    cin >> small_rooms;
    int large_rooms {0};
    cin >> large_rooms;

    cout << "\nEstimate for cleaning service:" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;

    const double small_room_price {25};
    cout << "Price per small room: $" << small_room_price << endl;
    const double large_room_price {35};
    cout << "Price per large room: $" << large_room_price << endl;

    double cost {
        (small_rooms * small_room_price) +
        (large_rooms * large_room_price)
        };
    cout << "Cost: $" << cost << endl;

    const double tax_rate {0.06};
    double tax_cost (cost * tax_rate);
    cout << "Tax: $" << tax_cost << endl;
    cout << "===========================" << endl;

    double total_estimate {cost + tax_cost};
    cout << "Total Estimate: $" << total_estimate << endl;

    const int expiry {30}; // days
    cout << "This estimate is valid for " << expiry << " days" << endl;

    return 0;
}
#include <iostream>

using namespace std;

//Program to calculate area of a room in square feet

int main() {

    cout << "Enter the width of the room (ft): ";
    int room_width {0};
    cin >> room_width;

    cout << "Enter the length of the room (ft): ";
    int room_length {0};
    cin >> room_length;

    cout << "The area of the room is " << room_width * room_length << " square feet." << endl;

    return 0;
}
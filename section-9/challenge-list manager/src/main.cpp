#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> list {25, 12, 2, 76, 3};
    
    bool quit {false};
    char selected {};

    cout << "Welcome to my list manager." << endl;

    while (!quit) {
        cout << "\nPlease choose from the options below:" << endl;
        cout << "---------------------------------------" << endl;
        cout << "P - Print numbers in list" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear list" << endl;
        cout << "Q - Quit" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Select an option with a single character: ";
        cin >> selected;
        switch(selected) {
            case 'P':
            case 'p': {
                cout << "\nNumbers in list: [";
                for (auto i : list) {
                    cout << " " << i << " ";
                }
                cout << "]" << endl;
                break;
            }
            case 'A':
            case 'a': {
                int addition {};
                cout << "Enter an integer to add: ";
                cin >> addition;
                list.push_back(addition);
                cout << addition << " added" << endl;
                break;
            }
            case 'M':
            case 'm': {
                if (list.size() > 0) {
                    cout << "The mean of the numbers is: " << endl;
                    int sum {};
                    for (auto i : list) {
                        sum += i;
                    }
                    cout << static_cast<double>(sum) / list.size() << endl;
                } else {
                    cout << "Unable to calculate the mean - no data" << endl;
                }
                break;
            }
            case 'S':
            case 's': {
                if (list.size() > 0) {
                    int smallest {list[0]};
                    for (int i : list) {
                        if (i <= smallest) {
                            smallest = i;
                        }
                    }
                    cout << "The smallest number is " << smallest << endl;
                } else {
                    cout << "Unable to determine smallest number - list is empty" << endl;
                }
                break;
            }
            case 'L':
            case 'l': {
                if (list.size() > 0) {
                    int largest {list[0]};
                    for (int i : list) {
                        if (i >= largest) {
                            largest = i;
                        }
                    }
                    cout << "The largest number is " << largest << endl;
                } else {
                    cout << "Unable to determine largest number - list is empty" << endl;
                }
                break;
            }
            case 'C':
            case 'c': {
                cout << "Are you sure you want to clear the list? (Y/N)" << endl;
                char choice {};
                while (true) {
                    cin >> choice;
                    if (choice == 'Y' || choice == 'y') {
                        cout << "Clearing list." << endl;
                        list.clear();
                        break;
                    } else if (choice == 'N' || choice == 'n') {
                        cout << "Okay, heading back to main menu" << endl;
                        break;
                    } else {
                        cout << "Invalid selection, try again." << endl;
                    }
                }
                break;
            }
            case 'Q':
            case 'q': {
                cout << "Goodbye." << endl;
                quit = true;
                break;
            }
            default:
                cout << "Invalid entry. Please try again!" << endl;
                break;
        }
    }
    return 0;
}
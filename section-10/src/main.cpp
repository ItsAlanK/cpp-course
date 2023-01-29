#include <iostream>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    bool quit = {false};

    while (!quit) {
        cout << "Do you wish to encrypt or decrypt a message?" << endl;
        cout << "Press 'E' to encrypt" << endl;
        cout << "Press 'D' to decrypt" << endl;
        cout << "Press 'Q' to quit" << endl;
        cout << endl;

        char choice {};
        cin >> choice;
        switch (choice) {
            case 'E':
            case 'e':{
                cout << "Enter the message you wish to encrypt: ";
                string original_message {};
                getline(cin, original_message);

                string encrypted_message {};

                for (char c : original_message) {
                    if (alphabet.find(c) != std::string::npos){
                        int index = alphabet.find(c);
                        encrypted_message += key[index];
                    } else {
                        encrypted_message += c;
                    }
                }

                cout << "\nYour encrypted message is: " << encrypted_message << endl << endl;
                break;
            }
            case 'D':
            case 'd':{
                cout << "Enter the message you wish to decrypt: ";
                string original_message {};
                getline(cin, original_message);

                string decrypted_message {};

                for (char c : original_message) {
                    if (key.find(c) != std::string::npos){
                        int index = key.find(c);
                        decrypted_message += alphabet[index];
                    } else {
                        decrypted_message += c;
                    }
                }

                cout << "\nThe message says: " << decrypted_message << endl << endl;
                break;
            }
            case 'Q':
            case 'q':{
                quit = true;
                break;
            }
            default:
                cout << "Enter a valid choice" << endl;
                break;
        }
    }

    cout << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    /* 
    Change calculator takes in an amount in cents and returns 
    the amount of each coin needed to give back the correct change in the most
    efficient way, rounded to 5c. Currency used is in EUR's.
    */
   const int eur_value {100};
   const int fifty_value {50};
   const int twenty_value {20};
   const int ten_value {10};
   const int five_value {5};

   int change_amount {};

   cout << "Please enter the amount of change needed in cents (EUR): ";
   cin >> change_amount;

   int euros {}, fiftys {}, twentys {}, tens {}, fives {}, remainder {};

   euros = change_amount / eur_value;
   remainder = change_amount % eur_value;
   fiftys = remainder / fifty_value;
   remainder %= fifty_value;
   twentys = remainder / twenty_value;
   remainder %= twenty_value;
   tens = remainder / ten_value;
   remainder %= ten_value;
   fives = remainder / five_value;
   remainder %= five_value;

   if (remainder >= 3) {
    fives ++;
    remainder = 0;
   }
      

   cout << "\nChange can be provided as follows:" << endl;
   cout << "Euros: " << euros << endl;
   cout << "50c: " << fiftys << endl;
   cout << "20c: " << twentys << endl;
   cout << "10c: " << tens << endl;
   cout << "5c: " << fives << endl;

   cout << "\nWith " << remainder << " cent rounded off.";
   
   return 0;
}
#include <iostream>
using namespace std;

/*
User Enters the amount and program should give the number of notes and coins which can sum upto that amount.
Rules:
10 Rupee Notes,
20 Rupee Notes,
50 Rupee Notes,
100 Rupee Notes,
500 Rupee Notes,
1000 Rupee Notes,
5000 Rupee Notes.

5 Rupee Coins,
2 Rupee Coins,
1 Rupee Coins.
*/

int main()
{
    cout << "Enter the amount: ";
    int amount;
    cin >> amount;
    while (amount < 0)
    {
        cout << "Invalid amount! Re-Enter";
        cin >> amount;
    }

    int notes_5k = 0, notes_1k = 0, notes_500 = 0, notes_100 = 0, notes_50 = 0, notes_20 = 0, notes_10 = 0;

    int coins_5, coins_2, coins_1;

    while (amount >= 5000)
    {
        amount -= 5000;
        notes_5k++;
    }

    while (amount >= 1000)
    {
        amount -= 1000;
        notes_1k++;
    }

    while (amount >= 500)
    {
        amount -= 500;
        notes_500++;
    }
    while (amount >= 100)
    {
        amount -= 100;
        notes_100++;
    }
    while (amount >= 50)
    {
        amount -= 50;
        notes_50++;
    }
    while (amount >= 10)
    {
        amount -= 10;
        notes_10++;
    }

    while (amount >= 5)
    {
        amount -= 5;
        coins_5++;
    }
    
    while (amount >= 2)
    {
        amount -= 2;
        coins_2++;
    }

    while (amount >= 1)
    {
        amount -= 1;
        coins_1++;
    }

    cout << "5000 Notes: " << notes_5k << "\n"
         << "1000 Notes: " << notes_1k << "\n"
         << "500 Notes: " << notes_500 << "\n"
         << "100 Notes: " << notes_100 << "\n"
         << "50 Notes: " << notes_50 << "\n"
         << "20 Notes: " << notes_20 << "\n"
         << "10 Notes: " << notes_10 << "\n"
         << "5 Coins: " << coins_5 << "\n"
         << "2 Coins: " << coins_2 << "\n"
         << "1 Coins: " << coins_1 << endl;
}
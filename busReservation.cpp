#include <iostream>
#include <iomanip>
using namespace std;

void printSeating(char[][6], int);

int main()
{
    char seats[13][6];
    printSeating(seats, 6);

    cout << left << setw(20) << "Class" << setw(15) << "Price" << endl;
    cout << left << setw(20) << "Economy Class" << setw(15) << "40,000" << endl;
    cout << left << setw(20) << "Business Class" << setw(15) << "85,000" << endl;
    cout << left << setw(20) << "First Class" << setw(15) << "150,000" << endl;
    return 0;
}

void printSeating(char seats[13][6], int cols)
{
    cout << "        A B C D E F" << endl;
    for (int i = 0; i < 13; ++i)
    {
        if (i >= 9)
            cout << "Row " << i + 1 << "  ";
        else
            cout << "Row " << i + 1 << "   ";
        for (int j = 0; j < cols; ++j)
        {
            cout << "X" << " ";
        }
        cout << "\n";
    }
}

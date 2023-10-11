#include <iostream>
using namespace std;
int main()
{
    int choice;
    double insertTemp, convertTemp;

    cout << "Choose the options: " << endl;
    cout << "1. Celsius => Farhenite: " << endl;
    cout << "2. Farhenite => Celsius: " << endl;

    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in celsius : ";
        cin >> insertTemp;
        convertTemp = (insertTemp * 9) / 5 + 32;
        cout << insertTemp << " Celsius is equal to " << convertTemp << " Farhenite" << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in farhenite : ";
        cin >> insertTemp;
        convertTemp = ((insertTemp - 32) * 5 / 9);
        cout << insertTemp << " Farhenite is equal to " << convertTemp << " Celsius" << endl;
    }
    else
    {
        cout << "Invalid option";
    }

    return 0;
}

// c-f
// 9/5 + 32

// f-c

// -32 * 5/9
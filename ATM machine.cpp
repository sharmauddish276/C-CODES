#include <iostream>
using namespace std;

int main()
{
    int pin = 1234;
    int enteredPin;
    double balance = 5000;
    int choice;
    double amount;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin)
    {
        cout << "Wrong PIN";
        return 0;
    }

    do
    {
        cout << "\n1.Check Balance";
        cout << "\n2.Deposit";
        cout << "\n3.Withdraw";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Balance = " << balance;
                break;

            case 2:
                cout << "Amount: ";
                cin >> amount;
                balance += amount;
                break;

            case 3:
                cout << "Amount: ";
                cin >> amount;
                if(amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient Balance";
                break;
        }

    }while(choice != 4);

    return 0;
}
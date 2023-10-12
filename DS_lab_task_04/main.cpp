#include <iostream>
using namespace std;

   struct BankAccount {
       int accountNumber;
       string accountHolderName;
       double accountBalance;


    BankAccount(int accountNum, string accountName, double balance) {
        accountNumber = accountNum;
        accountHolderName = accountName;
        accountBalance = balance;

    }

    void deposit(double amount) {

        if (amount > 0) {
        accountBalance += amount;
        cout << "Deposit successful. New balance: " << accountBalance << endl;
        }
        else {
            cout << "Invalid deposit amount." << endl;
        }
    }



    void withdraw(double amount) {

        if (amount > 0 && amount <= accountBalance) {
        accountBalance -= amount;
        cout << "Withdrawal successful. New balance: $" << accountBalance << endl;
        }
        else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }



    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder's Name: " << accountHolderName << endl;
        cout << "Account Balance: $" << accountBalance << endl;
    }
};



int main() {
    int choice;
    double amount;
    string accountHolderName;
    int accountNumber;

    cout << "Welcome to the Bank Account program. "<<endl;
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Account Holder's Name: ";
    cin>>accountHolderName;
    cout << "Enter Initial Account Balance: ";
    cin >> amount;




    BankAccount myAccount(accountNumber,accountHolderName, amount);

    while (true) {
        cout << "Bank Account Menu: "<<endl;
        cout << "1. Deposit "<<endl;
        cout << "2. Withdraw"<<endl;
        cout << "3. Display Account Details "<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;



        if (choice == 1) {
            cout << "Enter the deposit amount: ";
            cin >> amount;
            myAccount.deposit(amount);
            }
        else if (choice == 2) {
            cout << "Enter the withdrawal amount: ";
            cin >> amount;
            myAccount.withdraw(amount);
            }
        else if (choice == 3) {
            myAccount.displayAccount();
         break;}
          else {
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}

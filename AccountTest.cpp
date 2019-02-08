//
// Created by christopher.lebeau on 2/7/2019.
//

#include <iostream>
#include "Account.h"

using namespace std;
int main() {
    //create two account objects
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance();
    cout << "account2: " << account2.getName() << "balance is $"
        << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << "to account1 balance";
    account1.deposit(depositAmount);

    cout <<"\n\naccount1: " << account1.getName() << "balance is $"
        << account1.getBalance();
    cout <<"\n\naccount2: " << account2.getName() << "balance is $"
        << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: ";
    cin << depositAmount;
    cout << "adding " << depositAmount << "to account2 balance";
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << "balance is $"
        << account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << "balance is $"
        << account2.getBalance() << endl;


    //display intial value of name for each Account
    cout << "account1 name is: " << account1.getName() << endl;
    cout << "account2 name is: " << account2.getName() << endl;
}
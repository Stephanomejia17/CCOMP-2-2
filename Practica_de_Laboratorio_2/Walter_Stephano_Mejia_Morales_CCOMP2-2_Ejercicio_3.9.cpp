#include <iostream>
#include "Walter_Stephano_Mejia_Morales_CCOMP2-2_Ejercicio_3.9.h"

using namespace std;

int main(){
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << account1.getName() << "balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();
    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << "to account1 balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;

    cout << "\n\nEnter withdrawl amount for account1: ";
    int withdrawAmount;
    cin >> withdrawAmount;
    cout << "withdraw " << withdrawAmount << " to account1 balance";
    account1.withdraw(withdrawAmount);

    cout << "\n\nEnter withdrawl amount for account2: ";
    cin >> withdrawAmount;
    cout << "withdraw " << withdrawAmount << " to account2 balance";
    account2.withdraw(withdrawAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;

}
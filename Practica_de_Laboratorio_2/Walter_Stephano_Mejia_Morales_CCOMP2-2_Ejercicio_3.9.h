#include <string>
#include <iostream>

using namespace std;

class Account{
    public:

        Account(std::string accountName, int initialBalance) : name{accountName}{
            if(initialBalance>0){
                balance = initialBalance;
            }
        }

        void deposit(int depositAmount){
            if(depositAmount > 0){
                balance = balance + depositAmount;
            }
        }
        void withdraw(int withdrawAmount){
            if(withdrawAmount <= balance){
                balance = balance-withdrawAmount;
            }
            else{
                cout << "\n\nWithdrawal amount exceeded account balance";
                cout << "\nBalance: " << balance;
            }
        }

        int getBalance() const {
            return balance;
        }

        void setName(std::string accountName){
            name = accountName;
        }

        std::string getName() const {
            return name;
        }

    private:
        std::string name;
        int balance{0};


};
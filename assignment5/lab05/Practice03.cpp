#include <iostream>
#include <cstring>

using namespace std;

class AccountException{
    public:
        virtual void ShowExceptionReason() = 0;
};

class DepositException : public AccountException{
    private:
        int reqDep;
    public:
        DepositException(int money) : reqDep(money){}
        void ShowExceptionReason(){
            cout << "exception message : " << reqDep << "No deposit" << endl;
        }
};

class WithdrawException : public AccountException{
    private:
        int balance;
    public:
        WithdrawException(int money) : balance(money){}
        void ShowExceptionReason(){
            cout << "exception message : " << balance << ", Low balance" << endl;
        }
};

// class 
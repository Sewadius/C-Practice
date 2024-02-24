// Использование виртуальных методов
#include <iostream>
using std::cout;

class Account {
public:
    Account(double);
    double getBalance() const;
    virtual void printBalance();
private:
    double _balance;
};

class CheckingAccount : public Account {
public:
    CheckingAccount(double);
    void printBalance() override;
};

int main() {
    Account account(110.0);
    CheckingAccount checking(155.0);

    Account *baseClass = &account;
    Account *checkAcc = &checking;

    baseClass->printBalance();
    checkAcc->printBalance();
    
    return 0;
}

Account::Account(double balance) {
    this->_balance = balance;
}

double Account::getBalance() const {
    return _balance;
}

void Account::printBalance() {
    cout << "Ошибка! Баланс недоступен для базового класса\n";
}

CheckingAccount::CheckingAccount(double balance) : Account(balance) {}

void CheckingAccount::printBalance() {
    cout << "Проверка баланса счёта: " << getBalance() << '\n';
}

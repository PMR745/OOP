#include<iostream>
#include<string.h>
using namespace std;

class Bank {
    int account_no;
    char accountHolderName[100], account_type[100];
    float bal;
    public:
    Bank(int acc_no, char *name, char *type, float balance) {
        account_no = acc_no;
        strcpy(accountHolderName, name);
        strcpy(account_type, type);
        bal = balance;
    }
    void deposit();
    void withdraw();
    void show();
};

void Bank::deposit() {
    int depositAmt;
    cout << "Enter Deposit Amount: ";
    cin >> depositAmt;
    bal += depositAmt;
}

void Bank::withdraw() {
    int withdrawAmt;
    cout << "Enter Withdrawal Amount: ";
    cin >> withdrawAmt;
    if(withdrawAmt > bal)
        cout << "Insufficient Balance for withdrawal Amount!";
    bal -= withdrawAmt;
}

void Bank::show() {
    cout << "\n\tAccount Details\n";
    cout << "Account Number: " << account_no;
    cout << "\nName: " << accountHolderName;
    cout << "\nAccount Type: " << account_type;
    cout << "\nBalance: " << bal;
}

int main(){
    int accountNo;
    char name[100], accType[100];
    float Balance;
    cout << "\tWelcome to PMR Bank\n";
    cout << "\nPlease Enter your Account No: ";
    cin >> accountNo;
    cout << "\nPlease Enter Your Name: ";
    cin >> name;
    cout << "\nEnter Account Type: ";
    cin >> accType;
    cout << "\nEnter Initial Balance: ";
    cin >> Balance;

    Bank acc1(accountNo, name, accType, Balance);
    acc1.deposit();
    acc1.withdraw();
    acc1.show();
    return 0;
}
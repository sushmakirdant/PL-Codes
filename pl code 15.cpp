#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    float balance;
    float loan;
    float interest;

public:
    BankAccount() {
        accNo = 0;
        name = "Not Assigned";
        balance = 0;
        loan = 0;
        interest = 0;
    }

    BankAccount(int a, string n, float b) {
        accNo = a;
        name = n;
        balance = b;
        loan = 0;
        interest = 0;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!\n";
    }

    void takeLoan(float l, float rate, float time) {
        loan = l;
        interest = (loan * rate * time) / 100;
    }

    void display() {
        cout << "\n========= BANK DETAILS =========\n";
        cout << "Account Number : " << accNo << endl;
        cout << "Name           : " << name << endl;
        cout << fixed << setprecision(2);
        cout << "Balance        : " << balance << endl;
        cout << "Loan Taken     : " << loan << endl;
        cout << "Interest       : " << interest << endl;
        cout << "Total Payable  : " << loan + interest << endl;
        cout << "================================\n";
    }
};

int main() {
    int accNo;
    string name;
    float balance, amount, loanAmt, rate, time;
    int choice;

    cout << "===== BANK MANAGEMENT SYSTEM =====\n";

    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    BankAccount b1(accNo, name, balance);

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Take Loan\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                b1.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                b1.withdraw(amount);
                break;

            case 3:
                cout << "Enter Loan Amount: ";
                cin >> loanAmt;
                cout << "Enter Rate (%): ";
                cin >> rate;
                cout << "Enter Time (years): ";
                cin >> time;
                b1.takeLoan(loanAmt, rate, time);
                break;

            case 4:
                b1.display();
                break;

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}
#include <iostream>
using namespace std;

class BankLoan {
private:
    string name;
    float principal, rate, time, interest;

public:
    void getDetails() {
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Loan Amount (Principal): ";
        cin >> principal;

        cout << "Enter Rate of Interest (%): ";
        cin >> rate;

        cout << "Enter Time (in years): ";
        cin >> time;
    }

    void calculateInterest() {
        interest = (principal * rate * time) / 100;
    }

    void displayDetails() {
        cout << "\n===== LOAN DETAILS =====\n";
        cout << "Customer Name: " << name << endl;
        cout << "Principal Amount: " << principal << endl;
        cout << "Rate of Interest: " << rate << "%" << endl;
        cout << "Time: " << time << " years" << endl;
        cout << "Interest: " << interest << endl;
        cout << "Total Amount: " << principal + interest << endl;
        cout << "========================\n";
    }
};

int main() {
    BankLoan b1;  

    b1.getDetails();        
    b1.calculateInterest(); 
    b1.displayDetails();    

    return 0;
}
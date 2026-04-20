#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int roomDays;
    float roomChargePerDay, foodCharge, serviceCharge, total;

    cout << "===== HOTEL BILL GENERATOR =====\n";

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Number of Days Stayed: ";
    cin >> roomDays;

    cout << "Enter Room Charge per Day: ";
    cin >> roomChargePerDay;

    cout << "Enter Food Charges: ";
    cin >> foodCharge;

    cout << "Enter Service Charges: ";
    cin >> serviceCharge;

    total = (roomDays * roomChargePerDay) + foodCharge + serviceCharge;

    cout << "\n===== HOTEL BILL =====\n";
    cout << "Customer Name: " << name << endl;
    cout << "Days Stayed: " << roomDays << endl;
    cout << "Room Charges: " << roomDays * roomChargePerDay << endl;
    cout << "Food Charges: " << foodCharge << endl;
    cout << "Service Charges: " << serviceCharge << endl;
    cout << "---------------------------\n";
    cout << fixed << setprecision(2);
    cout << "Total Bill: " << total << endl;
    cout << "===========================\n";

    return 0;
}
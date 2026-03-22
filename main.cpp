#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main() {
    vector<double> expenses;
    double amount;

    cout << "=== Simple Budget Manager (Team Project) ===" << endl;
    cout << "Enter expense amounts (enter 0 to finish):" << endl;

    while (cin >> amount && amount != 0) {
        expenses.push_back(amount);
        cout << "Added: " << amount << ". Next: ";
    }

    

    return 0;
}
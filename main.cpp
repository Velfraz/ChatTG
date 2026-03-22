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
    
    cout << "\n----------------------------" << endl;
    if (expenses.empty()) {
        cout << "No expenses to calculate." << endl;
    }
    else {
        double total = 0;
        for (double e : expenses) {
            total += e;
        }

        double average = total / expenses.size();

        cout << "Total Expenses: " << total << " UAH" << endl;
        cout << "Number of items: " << expenses.size() << endl;
        cout << "Average Spend: " << average << " UAH" << endl;
    }
    cout << "----------------------------" << endl;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
    

    return 0;
}
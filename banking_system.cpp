#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    int accNo;
    string name;
    double balance;
    int transactionCount;

    Account(int a, string n, double b) {
        accNo = a;
        name = n;
        balance = b;
        transactionCount = 0;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount!\n";
            return;
        }
        balance += amount;
        transactionCount++;
        cout << "Deposit successful!\n";
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!\n";
            return;
        }
        if (balance - amount < 500) {
            cout << "Withdrawal failed! Minimum balance ₹500 must be maintained.\n";
            return;
        }
        balance -= amount;
        transactionCount++;
        cout << "Withdrawal successful!\n";
    }

    void display() {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: ₹" << balance;
        cout << "\nTransaction Count: " << transactionCount << "\n";
    }
};

int findAccount(vector<Account> &accounts, int accNo) {
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accNo == accNo)
            return i;
    }
    return -1;
}

int main() {
    vector<Account> accounts;
    int choice = 0;

    while (choice != 5) {
        cout << "\n===== Banking System Menu =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. View Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int accNo;
            string name;
            double balance;

            cout << "Enter Account Number: ";
            cin >> accNo;

            if (findAccount(accounts, accNo) != -1) {
                cout << "Account number already exists!\n";
                continue;
            }

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Initial Balance: ";
            cin >> balance;

            if (balance < 500) {
                cout << "Minimum balance ₹500 required!\n";
                continue;
            }

            accounts.push_back(Account(accNo, name, balance));
            cout << "Account created successfully!\n";
        }

        else if (choice == 2) {
            int accNo;
            double amount;

            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findAccount(accounts, accNo);
            if (index == -1) {
                cout << "Account not found!\n";
                continue;
            }

            cout << "Enter amount to deposit: ";
            cin >> amount;

            accounts[index].deposit(amount);
        }

        else if (choice == 3) {
            int accNo;
            double amount;

            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findAccount(accounts, accNo);
            if (index == -1) {
                cout << "Account not found!\n";
                continue;
            }

            cout << "Enter amount to withdraw: ";
            cin >> amount;

            accounts[index].withdraw(amount);
        }

        else if (choice == 4) {
            int accNo;

            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findAccount(accounts, accNo);
            if (index == -1) {
                cout << "Account not found!\n";
                continue;
            }

            accounts[index].display();
        }

        else if (choice == 5) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
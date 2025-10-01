#include <iostream>
using namespace std;

class BankAccount{
private:
    static int nextAccountNumber;
    int accountNumber;
    string AccountHolderName;
    double balance;

public:
    BankAccount(string name, double initialBalance){
        AccountHolderName = name;
        balance = initialBalance;
        accountNumber = nextAccountNumber++;
    }

    void deposite(double Amount){
        balance += Amount;
        cout << balance << "Rs Deposited Successful : "<<endl;
    }

    void withdraw(double Amount){
        if (balance >= Amount){
            balance -= Amount;
            cout << balance << "Rs Withdraw Successful : "<<endl;
        }
        else{
            cout << "Insufficient Amount !" << endl;
        }
    }

    void display(){
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account HolderName : " << AccountHolderName << endl;
        cout << "Current Balance in your Account : " << balance << endl;
    }
};

int BankAccount::nextAccountNumber = 133740;

int main(){

    string name;
    double initialBalance;

    cout << "Enter your Name : ";
    getline(cin, name);

    cout << "Enter Your Initial Balance : ";
    cin >> initialBalance;

    BankAccount accout1(name, initialBalance);

    string YesDeposite;
    cout << "You want to deposit more money Yes Or No : ";
    cin >> YesDeposite;

   

  

    

    for (int i = 0; i < YesDeposite.length(); i++){
        YesDeposite[i] = tolower(YesDeposite[i]);
    }
    

    if (YesDeposite == "yes"){

        double depositeAmount;
        cout << "Enter Your Deposite Amount : ";
        cin >> depositeAmount;

        accout1.deposite(depositeAmount);
        accout1.display();
    }else if (YesDeposite == "no"){
            string YesWithdraw;
            cout << "You want to withdraw more money Yes Or No : ";
            cin >> YesWithdraw;
            // accout1.display();

            for (int i = 0; i < YesWithdraw.length(); i++){
               YesWithdraw[i] = tolower(YesWithdraw[i]);
            }

        if(YesWithdraw == "yes"){
            double withdrawAmount;
            cout << "Enter Your Withdraw Amount : ";
            cin >> withdrawAmount;
            accout1.withdraw(withdrawAmount);
            accout1.display();
            return 0;
        }


    }else{
        accout1.display();
    }

    return 0;
}

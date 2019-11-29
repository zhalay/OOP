#include <iostream>
#include <string>
using namespace std;
class Account {

public:

   Account( string accName, int initialBalance )
      : name{ accName } {

      if ( initialBalance > 0 )
         balance = initialBalance;
   }

   void deposit( int depositAmount ) {
      if ( depositAmount > 0 )
         balance = balance + depositAmount;
   }

   void withdraw( int withdrawAmount ) {
      if ( withdrawAmount > balance )
         cout << "Withdraw amount is more than your account balance.\n";
      if ( withdrawAmount <= balance )
         balance = balance - withdrawAmount;
   }

   int getBalance() const {
      return balance;
   }

   void setName( string accName ) {
      name = accName;
   }

   string getName() const {
      return name;
   }

private:

   string name;
   int balance{ 0 };
};
int main() {

   Account acc1( "sana munawar", 200000 );
   Account acc2( "larki", 100000 );
   cout<<"\n\n\t\t\t\tWelcome to Bank of 5E\n\n "<<endl;
   cout << "1ST Account "<<endl<<"Name: " << acc1.getName() <<endl<< "balance: "<< acc1.getBalance();
   cout << "\n\n2ND Account "<<endl<<"Name: " << acc2.getName() <<endl<< "balance: "<< acc2.getBalance();

   int withdrawAmount;

   cout << "\n\nEnter YOUR withdraw amount for 1ST account: ";
   cin >> withdrawAmount;

   acc1.withdraw( withdrawAmount );

   cout << "1ST Account "<<endl<<"Name: " << acc1.getName() <<endl<< "balance: "<< acc1.getBalance();
   cout << "\n\n2ND Account "<<endl<<"Name: " << acc2.getName() <<endl<< "balance: "<< acc2.getBalance();

   cout << "\n\nEnter YOUR withdraw amount for 2ND account ";
   cin >> withdrawAmount;
   
   acc2.withdraw( withdrawAmount );

  cout << "1ST Account "<<endl<<"Name: " << acc1.getName() <<endl<< "balance: "
      << acc1.getBalance();
   cout << "\n\n2ND Account "<<endl<<"Name: " << acc2.getName() << endl<<"balance: "<< acc2.getBalance();

   return 0;
}

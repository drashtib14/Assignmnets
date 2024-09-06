#include<iostream>
using namespace std;
class BankAccount{
	private:
		int acc_number;
		float balance;
	public:
		BankAccount(int num,float bal){
			this->acc_number = num;
			this->balance = bal;
		}
		//deposit money
		void deposit(float amount)
		{
			if(amount > 0){
				balance += amount;
				cout<<"Deposited: "<<amount<<endl;
				cout<<"New Balance: "<<balance<<endl<<endl;
			}
			else{
				cout<<"Deposit amount must be positive"<<endl;
			}
		}
		//withdraw money
		float withdraw(float amount)
		{
			if(amount > 0 && amount <= balance){
				balance -= amount;
				cout<<"Withdrawn: "<<amount<<endl;
				cout<<"Remaining Balance: "<<balance<<endl<<endl;
			}
			else{
				cout<<"Insufficient funds. Withdrawal failed"<<endl;	
			}
		}
		void display(){
			cout<<"Account Number: "<<acc_number<<endl;
			cout<<"Current Balance: "<<balance<<endl<<endl;
		}
};
int main(){
	BankAccount acc1(12345,1000);
	acc1.display();
	acc1.deposit(500);
	acc1.withdraw(1300);
	
	return 0;
}

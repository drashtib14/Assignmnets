#include<iostream>
using namespace std;
class Bank{
	//private data members
	private:
	string depositer_name;
	int acc_number;
	string acc_type;
	float balance;
	
	//public Member functions
	public:
		//function to assign values
		void assignValues(string name,int acc_num,string acc_type,float bal){
			this->depositer_name = name;
			this->acc_number = acc_num;
			this->acc_type = acc_type;
			this->balance = bal;
		}
		
		//function to deposit amount
		void deposit(float amount){
			balance += amount;
			cout<<"Deposited. New balance: "<<balance<<endl;
		}
		
		//function to withdraw amount
		void withdraw(float amount){
			if(amount > balance){
				cout<<"Insufficient balance. Withdrawal failed."<<endl;
			}
			else{
				balance -= amount;
				cout<<endl<<"Withdrawn. New balance: "<<balance<<endl;
			}
		}
		
		//function to display name and balance
		void display(){
			cout<<endl<<"Depositer Name: "<< depositer_name<<endl;
			cout<<"Current Balance: "<<balance<<endl<<endl;
		}
		
};
int main(){
	Bank acc1;
	
	//assigning values
	acc1.assignValues("Alice",12345,"Savings",1000.0);
	acc1.display(); //displaying values (name and balance)
	
	acc1.deposit(500.0); //depositing an amount
	acc1.withdraw(200.0); //withdraw an amount
	acc1.display();

	acc1.withdraw(1500.0); //trying to withdraw more than balance
	acc1.display();	
	return 0;
}

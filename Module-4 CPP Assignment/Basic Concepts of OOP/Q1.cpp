#include<iostream>
#include<math.h>
using namespace std;
class Calculator{
	float a,b;
	public:
		//function to get input from user
		void result(){
			cout<<"Enter First Number = ";
			cin>>a;
			cout<<"Enter Second Number = ";
			cin>>b;
		}
		
		//functions to add,substract,multiply and divide two numbers
		float add(){
			return a + b;
		}
		float sub(){
			return a - b;
		}
		float mul(){
			return a * b;
		}
		float div(){
			if(b == 0){
				cout<<"Devision by Zero"<<endl;
				return INFINITY;
			}
			else{
				return a / b;
			}
		}
};
int main(){
	char ch;
	Calculator c;
	
	cout<<"Enter + to Add two numbers"
		<<"\nEnter - to Substract two numbers"
		<<"\nEnter * to Multiply two numbers"
		<<"\nEnter / to Divide 2 numbers"
		<<"\nEnter 0 to Exit";
	
	do{
		cout<<"\n\nEnter Choice: ";
		cin>>ch;
		switch(ch){
			case '+':
				//calling result function
				c.result();
				cout<<"Result: "<<c.add();
				break;
			case '-':
				c.result();
				cout<<"Result: "<<c.sub();
				break;
			case '*':
				c.result();
				cout<<"Result: "<<c.mul();
				break;
			case '/':
				c.result();
				cout<<"Result: "<<c.div();
				break;
		}
	}while(ch == '+' || ch == '-' || ch == '*' || ch == '/');
	
	
	
	
	
	return 0;
}

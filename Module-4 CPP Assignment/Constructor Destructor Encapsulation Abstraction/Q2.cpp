#include<iostream>
using namespace std;
class Calculation{
	private:
		double num1,num2;
	public:
		Calculation(double a,double b){
			this->num1 = a;
			this->num2 = b;
			
			add();
			subtract();
			multiply();
			divide();
		}
		//calculations for add,subtract,multiplicationa and division
		void add(){
			cout<<"Addition: "<<num1<<" + "<<num2<<" = "<<(num1 + num2)<<endl;
		}
		void subtract(){
			cout<<"Subtraction: "<<num1<<" - "<<num2<<" = "<<(num1 - num2)<<endl;
		}
		void multiply(){
			cout<<"Multiplication: "<<num1<<" * "<<num2<<" = "<<(num1 * num2)<<endl;
		}
		void divide(){
			if(num2 != 0){
				cout<<"Division: "<<num1<<" / "<<num2<<" = "<<(num1 / num2)<<endl;
			}
			else{
				cout<<"Division by Zero"<<endl;
			}
		}
};
int main(){
	double x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	
	Calculation c1(x,y);
	return 0;
}

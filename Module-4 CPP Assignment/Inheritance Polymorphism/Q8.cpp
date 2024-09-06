#include<iostream>
using namespace std;
//function overloading
class MathOperations{
	public:
		//addition
		int operate(int a, int b){
			return a + b;
		}
		
		//subtraction
		int operate(int a, int b, char op){
			if(op == '-'){
				return a - b;
			}
		}
		
		//multiplication
		int operate(double a, double b){
			return a * b;
		}
		
		//division
		int operate(double a, double b, char op){
			if(op == '/'){
				return a / b;
			}
		}
};
int main(){
	MathOperations math;
	
	//addition
	int addResult = math.operate(10, 5);
	cout << "Addition: " << addResult << endl;
	
	//subtraction
	int subResult = math.operate(10, 5,'-');
	cout << "subtraction: " << subResult << endl;
	
	//multiplication
	int mulResult = math.operate(10.0, 5.0);
	cout << "multiplication: " << mulResult << endl;
	
	//division
	int divResult = math.operate(9.0, 3.0, '/');
	cout << "division: " << divResult << endl;
	
	return 0;
}

#include<iostream>
using namespace std;
//inline function
inline int multiply(int a,int b) { return a * b; }
inline int cube(int x) { return x * x * x; }

int main(){
	int num1,num2,num3;
	//getting input from the user
	cout<<"Enter two number to multiply: ";
	cin>>num1>>num2;
	cout<<"Enter a number to find its cubic value: ";
	cin>>num3;
	
	//displaying calculation of multiplication
	cout<<"\nMultiplication of "<<num1<<" and "<<num2<<" is: "<<multiply(num1,num2)<<endl;
	
	//displaying calculation of cubic value
	cout<<"Cubic value of "<<num3<<" is: "<<cube(num3)<<endl;
	return 0;
}

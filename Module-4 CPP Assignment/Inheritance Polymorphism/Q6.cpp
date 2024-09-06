#include<iostream>
using namespace std;
//base class
class BaseClass{
	private:
		//private members can only be accessed within the class of private
		int x = 1;
	protected:
		//protected can be accessed in base class and derived classes
		int y = 2;
	public:
		//public can be accessed in base class, derived class as well as in main() function
		int z = 3;
		
//	constuctor can be used to access all the value in main() function
	BaseClass(){
		x;
		y;
		z;
		cout << x;
		cout << y;
		cout << z;
	}

};
//derived class
class DerivedClass : public BaseClass{
	public:
		void displayVar(){
//			cout << x; // cannot be accessed private member
			cout << y; // derived member can be accessed
			cout << z; // public member can be accessed
		}
};
int main(){
	cout << "Accessing using constructor: \n";
	DerivedClass d1; // using constructor
	
	cout << "\n\nAccessing public member: \n";
	cout << d1.z << endl << endl; // public variable
	//variable x and y cannot be accessed here bacause it is private and protected
	
	cout << "Accessing using function of derived class: \n";
	d1.displayVar();
	
	return 0;
}

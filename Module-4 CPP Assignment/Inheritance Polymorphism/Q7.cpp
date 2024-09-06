#include<iostream>
using namespace std;
//Base class
class Parent{
	public:
		Parent(){
			cout << "Parent Constructor called" << endl;
		}
};

// derived class
class Child : public Parent{
	public:
		Child(){
			cout << "Child Constructor called" << endl;
		}
};

// derived class
class GrandChild : public Child{
	public:
		GrandChild(){
			cout << "GrandChild Constructor called" << endl;
		}
};
int main(){
	GrandChild gc1;
	
	return 0;
}

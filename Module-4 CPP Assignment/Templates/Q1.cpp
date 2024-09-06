#include<iostream>
using namespace std;
template<typename T> // define first to use template
void swapvalues(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main(){
	int x,y;
	//getting values from user
	cout<<"\nEnter the value of x = ";
	cin>>x;
	cout<<"\nEnter the value of y = ";
	cin>>y;
	cout<<"\nValues before swapping = "<<x;
	cout<<"\nValues before swapping = "<<y;
	swapvalues(x,y);
	cout<<"\nValues after swapping = "<<x;
	cout<<"\nValues after swapping = "<<y<<endl;
	
	//for character datatype
	char a='A',b='B';
	cout<<"\nValues before swapping = "<<a;
	cout<<"\nValues before swapping = "<<b;
	swapvalues(a,b);
	cout<<"\nValues after swapping = "<<a;
	cout<<"\nValues after swapping = "<<b<<endl;
	
	//for float datatype
	float p=11.11,q=23.52;
	cout<<"\nValues before swapping = "<<p;
	cout<<"\nValues before swapping = "<<q;
	swapvalues(p,q);
	cout<<"\nValues after swapping = "<<p;
	cout<<"\nValues after swapping = "<<q;
	
	return 0;
}

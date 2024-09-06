#include<iostream>
using namespace std;
class Circle{
	private:
		float pi = 3.14; //formula to find radius
		double radius;
	public:
		void setRadius(int r){
			this->radius = r;
		}
		double getArea(){
			return pi*radius*radius;
		}
		double getCircumference(){
			return 2*pi*radius;
		}
};
int main(){
	Circle c1;
	c1.setRadius(5.0);
	cout<<"Area of Circle: "<<c1.getArea()<<endl;
	cout<<" of the Circle: "<<c1.getCircumference()<<endl;
	
	//getting value from user
	double a;
	cout<<"Enter the value: ";
	cin>>a;
	c1.setRadius(a);
	cout<<"Area of Circle: "<<c1.getArea()<<endl;
	cout<<"Circumference of Circle: "<<c1.getCircumference()<<endl;

	
	return 0;
}

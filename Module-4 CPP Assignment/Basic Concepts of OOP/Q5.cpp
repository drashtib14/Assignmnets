#include<iostream>
using namespace std;
class Rectangle{
	private:
		double length,width;
	public:
		//set data
		void setArea(int l,int w){
			this->length = l;
			this->width = w;
		}
		//get data
		double getArea(){
			return length * width;
		}
		double getPerimeter(){
			return 2*(length + width);
		}
};
int main(){
	Rectangle r1;
	r1.setArea(4,6);
	cout<<"Area of Rectangle: "<<r1.getArea()<<endl;
	cout<<"Area of Rectangle: "<<r1.getPerimeter()<<endl;
		
	return 0;
}

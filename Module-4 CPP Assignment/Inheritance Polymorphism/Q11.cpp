#include<iostream>
using namespace std;
//Function overloading
class Shape
{
	public:
	void shape(string name,double radius)//radius
	{
		cout<<"\n"<<name<<"\narea = "<<3.14*(radius*radius);
	}
	void shape(string name,int l,int b)//rectangle
	{
		cout<<"\n"<<name<<"\narea = "<<l*b;
	}
	void shape(string name,float b,float h)//triangle
	{
		cout<<"\n"<<name<<"\narea = "<<0.5*(b*h);
	}
};
int main(){
	Shape s1,s2,s3;
	s1.shape("Circle",2.0);
	s2.shape("Rectangle",6,4);
	s3.shape("Triangle",2.0f, 4.0f);
	
	return 0;
}

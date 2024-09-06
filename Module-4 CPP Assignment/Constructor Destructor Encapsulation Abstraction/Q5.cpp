#include<iostream>
using namespace std;
class Triangle{
	private:
		double side1;
        double side2;
        double side3;
	public:
		Triangle(double a,double b,double c){
			this->side1 = a;
			this->side2 = b;
			this->side3 = c;
		}
		bool isEquilateral(){
			return (side1 == side2 && side2 == side3);
		}
		bool isIsosceles(){
			return (side1 == side2 || side2 == side3 || side1 == side3);
		}
		bool isScalene(){
			return (side1 != side2 && side2 != side3 && side1 != side3);
		}
		
		void display(){
			if(isEquilateral()){
				cout<<"The Triangle is equilateral"<<endl;
			}
			else if(isIsosceles()){
				cout<<"The Triangle is isosceles"<<endl;
			}
			else if(isScalene()){
				cout<<"The Triangle is scalene"<<endl;
			}
			else{
				cout<<"Invalid input"<<endl;
			}
		}
};
int main(){
	Triangle t1(3,3,3);
	Triangle t2(3,4,4);
	Triangle t3(3,4,5);
	
	t1.display();
	t2.display();
	t3.display();

	return 0;
}

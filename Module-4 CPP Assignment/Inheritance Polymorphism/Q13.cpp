#include<iostream>
using namespace std;
class Compare{
	private:
		int a, b;
	public:
		Compare(int x, int y){
			this->a = x;
			this->b = y;
		}
		
		friend int findMax(Compare &obj);
		
		void display(){
			cout << "a = " << a << ", b = " << b << endl;
		}
};
int findMax(Compare &obj){
	if(obj.a > obj.b){
		return obj.a;
	}
	else{
		return obj.b;
	}
}
int main(){
	Compare c1(10,15);
	
	cout << "The numbers are: " << endl;
	c1.display();
	
	cout << "\nThe maximum number is: " << findMax(c1) << endl;
	
	return 0;
}

#include<iostream>
using namespace std;
class Swap{
	private:
		int a, b;
	public:
		Swap(int x, int y){
			this->a = x;
			this->b = y;
		}
		
		friend void swapVal(Swap &obj);
		
		void display(){
			cout << "a = " << a << ", b = " << b << endl;
		}
};
void swapVal(Swap &obj){
	obj.a = obj.a + obj.b;
	obj.b = obj.a - obj.b;
	obj.a = obj.a - obj.b;
}

int main(){
	Swap s1(10,20);
	
	cout << "Before Swapping: " << endl;
	s1.display();
	
	swapVal(s1);
	
	cout << "\nAfter Swapping: " << endl;
	s1.display();

	
	return 0;
}

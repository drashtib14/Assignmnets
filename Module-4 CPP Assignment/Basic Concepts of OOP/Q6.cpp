#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		int age;
		string country;
	public:
		//set value
		void setVal(string name,int age,string country){
			this->name = name;
			this->age = age;
			this->country = country;
		}
		//get value
		void getVal(){
			cout<<"Person Name: "<<name<<endl;
			cout<<"Person Age: "<<age<<endl;
			cout<<"Person Country: "<<country<<endl;
		}
};
int main(){
	Person p1;
	p1.setVal("Alice",20,"Georgia");
	p1.getVal();	
	return 0;
}

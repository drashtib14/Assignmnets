#include<iostream>
using namespace std;
class Car{
	private:
		string company;
		string model;
		int year;
	public:
		void setVal(string cmp,string model,int year){
			this->company = cmp;
			this->model = model;
			this->year = year;
		}
		void getVal(){
			cout<<"Company name: "<<company<<endl;
			cout<<"Model name: "<<model<<endl;
			cout<<"Year: "<<year<<endl;
		}
};
int main(){
	Car c1,c2;
	c1.setVal("Hyundai","Creata",1995);
	c1.getVal();
	c2.setVal("Toyota","Corolla",2020);
	c2.getVal();
	return 0;
}

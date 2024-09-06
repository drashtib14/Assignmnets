#include<iostream>
using namespace std;
class Employee{
	private:
		string emp_name;
		int emp_id;
		double salary;
	public:
		Employee(string name,int id,double sal){
			this->emp_name = name;
			this->emp_id = id;
			this->salary = sal;
		}
		//calculating salary based on performance
		void setSalary(double rating){
			if(rating >= 4.5){
				salary *= 1.20;
			}
			else if(rating >= 3.5){
				salary *= 1.10;
			}
			else if(rating >= 2.5){
				salary *= 1.05;
			}
			else{
				cout<<"No salary increase"<<endl;
			}
		}
		void display(){
			cout<<"Employee Name: "<<emp_name<<endl;
			cout<<"Employee Id: "<<emp_id<<endl;
			cout<<"Current Salary: "<<salary<<endl<<endl;
		}
};
int main(){
	Employee emp1("Alice Johnson",101,50000);
	emp1.display();
	
	emp1.setSalary(2.1);
	emp1.display();
	
	return 0;
}

#include<iostream>
using namespace std;
class Address{
	private:
		string houseNo, street, city, state;
	public:
		Address(string home, string str, string cty, string st){
			this->houseNo = home;
			this->street = str;
			this->city = cty;
			this->state = st;
		}
		void displayAddress(){
			cout<<"Address: "<< houseNo <<", " << street <<", " <<city<<", " << state <<endl;
		}
};
class Student{
	private:
		string name, std_class;
		int rollno;
		float marks;
		Address address; //aggregation
	public:
		//setdata using constructor
		Student(string name, string std_class, int rollno, float marks, Address addr) : address(addr){
			this->name = name;
			this->std_class = std_class;
			this->rollno = rollno;
			this->marks = marks;
		}
		//display the output
		void getData(){
			cout<<"\nStudent Name: " << name << endl;
			cout<<"Student Class: " << std_class << endl;
			cout<<"Student Rollno: " << rollno << endl;
			cout<<"Student Marks: " << marks << endl;
			cout<<"Grade: " << calculateGrade() << endl;
			address.displayAddress();
		}
		//calculates grade according to the marks
		char calculateGrade(){
			if(marks >= 90) return 'A';
			else if(marks >= 75) return 'B';
			else if(marks >= 60) return 'C';
			else if(marks >= 50) return 'D';
			else return 'F';
		}
};
int main(){
	//with the use of constructor
	Address addr1("101", "Baker Street", "London", "UK");
	Student s1("Alice Johnson","10th Grade",123,85.5,addr1);
	s1.getData();
	//student2
	Address addr2("203", "Sunset Boulevard", "Los Angeles", "California");
    Student s2("John Doe", "11th Grade", 456, 92.3, addr2);
    s2.getData();
	
	return 0;
}

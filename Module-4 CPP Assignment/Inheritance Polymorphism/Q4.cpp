#include<iostream>
using namespace std;
class Person{
	private:
		string name;
	public:
		void setPersonData(string name){
			this->name = name;
		}
		void getPersonData(){
			cout<< "Student Name: " << name << endl;
		}
};
class Marks{
	private:
		float subject1;
		float subject2;
		float subject3;
	public:
		void setMarks(float sub1,float sub2,float sub3){
			subject1 = sub1;
			subject2 = sub2;
			subject3 = sub3;
		}
		void getMarks(){
			cout<< "Maths: " << subject1 << endl;
			cout<< "Science: " << subject2 << endl;
			cout<< "Physics: " << subject3 << endl;
		}
};
class Student : public Person, public Marks{
};
int main(){
	Student s1;
	cout<< "Student Marksheet\n" << endl;
	s1.setPersonData("Sofia");
	s1.setMarks(65.5,85.4,68.7);
	s1.getPersonData();
	s1.getMarks();
	
	return 0;
}

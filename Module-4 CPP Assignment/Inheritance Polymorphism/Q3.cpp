#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
	public:
		void inputPersonData(){
			cout<< "Enter Name: ";
			getline(cin, name);
			cout<< "Enter age: ";
			cin >> age;
		}
		void getDataPerson(){
			cout<< "\nName: " << name << endl;
			cout<< "Age: " << age << endl;
		}
};
class Student{
	protected:
		float percentage;
	public:
		void inputStudentData(){
			cout<< "Enter Percentage: ";
			cin >> percentage;
		}
		void getDataStudent(){
			cout<< "Percentage: " << percentage << endl;
		}
};
//multiple inheritance
class Teacher : public Person, public Student{
	protected:
		double salary;
	public:
		void inputTeacherData(){
			cout<< "Enter salary: ";
			cin >> salary;
		}
		void getDataTeacher(){
			cout<< "Salary: " << salary << endl;
		}
};
int main(){
	Teacher t1;
	//Get data of student at runtime
	cout << "Enter details for Student: " << endl;
	t1.inputPersonData();
	t1.inputStudentData();
	
	//display data
	cout << "\nStudent details: ";
	t1.getDataPerson();
	t1.getDataStudent();
	
	//get teacher data
	cout<< "\nEnter details for Teacher: " << endl;
	t1.inputTeacherData();
	
	//display teacher data
	cout<< "\nTeacher details: \n";
	t1.getDataTeacher();
	
	return 0;
}

#include<iostream>
using namespace std;
class Student{
	private:
		int rollno;
	public:
		void setStudentData(int no){
			rollno = no;
		}
		void getStudentData(){
			cout<< "Student Roll No: " << rollno << endl;
		}
};
class Test : public Student{
	protected:
		float subject1;
		float subject2;
	public:
		void setTestData(float sub1,float sub2){
			subject1 = sub1;
			subject2 = sub2;
		}
		void getTestData(){
			cout<< "Maths: " << subject1 << endl;
			cout<< "Physics: " << subject2 << endl;
		}
};
class Result : public Test{
	private:
		float totalMarks;
	public:
		void calculateTotal(){
			totalMarks = subject1 + subject2;
		}
		void displayTotal(){
			cout<< "Total: " << totalMarks << endl << endl;
		}
};
int main(){
	//object of class Result
	Result r1;
	
	cout<<"Student Result: \n" << endl;
	//student1
	r1.setStudentData(101);
	r1.getStudentData();
	r1.setTestData(95.2,95.0);
	r1.getTestData();
	r1.calculateTotal();
	r1.displayTotal();
	
	//student2
	r1.setStudentData(102);
	r1.getStudentData();
	r1.setTestData(84.2,76.5);
	r1.getTestData();
	r1.calculateTotal();
	r1.displayTotal();
	
	//student3
	r1.setStudentData(103);
	r1.getStudentData();
	r1.setTestData(65.9,84.9);
	r1.getTestData();
	r1.calculateTotal();
	r1.displayTotal();
	
	return 0;
}

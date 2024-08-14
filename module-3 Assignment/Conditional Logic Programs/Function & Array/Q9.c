#include<stdio.h>
struct Student{
	int roll;
	float percentage;
	char grade;
};

union Data{
	int num;
	char ch;
};
int main(){
	//structure
	struct Student s1;
	s1.roll = 1;
	s1.percentage = 96.5;
	s1.grade = 'A';
	
	printf("Structure: \n");
	printf("Roll no = %d\n",s1.roll);
	printf("Percentage = %.2f\n",s1.percentage);
	printf("Grade = %c\n\n",s1.grade);
	
	//union
	printf("Union: \n");
	union Data d1;
	d1.num = 67;
	d1.ch = 'D';
	printf("Value of num = %d",d1.num);
	printf("\nValue of ch = %c",d1.ch);	
		
	return 0;
}

#include<stdio.h>
struct Employee{
	int emp_no,emp_age;
	char emp_name[50],emp_add[100];
}e[100];
int main(){
	struct Employee e1;
	//manually printing
	e1.emp_no = 101;
	snprintf(e1.emp_name, sizeof(e1.emp_name), "Sabrina Carpenter");
	snprintf(e1.emp_add, sizeof(e1.emp_add), "Feet street\n\t\t    street 123..");
	e1.emp_age = 21;
	
	printf("Employee1 no = %d",e1.emp_no);
	printf("\nEmployee1 name = %s",e1.emp_name);
	printf("\nEmployee1 address = %s",e1.emp_add);
	printf("\nEmployee1 age = %d",e1.emp_age);
	
	//getting value from user
	int size;
		
	printf("\n\nEnter the size: ");
	scanf("%d",&size);
		
	for(int i=0;i<size;i++){
		printf("\nEnter Employee no = ");
		scanf("%d",&e[i].emp_no);
		printf("Enter Employee Name = ");
		getchar();
		gets(e[i].emp_name);
		//fgets(s[i].std_name, sizeof s[i].std_name, stdin);
		//scanf("%s",s[i].std_name); //doesnt get char after space
		printf("Enter Employee Address = ");
		getchar();
		gets(e[i].emp_add);
		printf("Enter Employee age = ");
		scanf("%d",&e[i].emp_age);
		printf("\n");
	}
	
	for (int i=0;i<size;i++) {
    	printf("\nEmployee %d \n%d \n%s \n%s \n%d\n",i+1, e[i].emp_no, e[i].emp_name, e[i].emp_add,e[i].emp_age);
    }
	
	return 0;
}

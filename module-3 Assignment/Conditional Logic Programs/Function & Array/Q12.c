#include<stdio.h>
#include<string.h>
int main(){
	char std_name[5][50];
	
	printf("Enter 5 Student names: \n");
	for(int i=0;i<5;i++){
		printf("Enter Name %d: ",i+1);
		fgets(std_name[i], sizeof(std_name[i]), stdin);
		std_name[i][strcspn(std_name[i], "\n")] = '\0';
	}
	
	printf("\nThe names of the students are:\n");
    for (int i=0;i<5;i++) {
        printf("%s\n", std_name[i]);
    }
    
	return 0;
}

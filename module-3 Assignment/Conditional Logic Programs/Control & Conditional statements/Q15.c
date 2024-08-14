#include<stdio.h>
int main(){
	int maths,phy,chem,total,totalmathsphy;
	
	printf("Enter the marks of maths: ");
	scanf("%d",&maths);
	printf("Enter the marks of physics: ");
	scanf("%d",&phy);
	printf("Enter the marks of chemistry: ");
	scanf("%d",&chem);
	
	total=maths+phy+chem;
	totalmathsphy=maths+phy;
	
	if(maths>=65 && phy>=55 && chem<=50){
		printf("The Candidate is eligible for admission");
	}
	else if(total>=190 || totalmathsphy>=140){
		printf("The Candidate is eligible for admission");
	}
	else{
		printf("The Candidate is not eligible for admission");
	}
	
	return 0;
}

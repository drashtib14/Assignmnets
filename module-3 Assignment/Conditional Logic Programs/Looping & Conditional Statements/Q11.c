#include<stdio.h>
int main(){
	char name[50];
	
	for(int i=1;i<=5;i++){
		printf("Enter name %d: ",i);
		scanf("%s",&name);
		
		printf("Name %d entered %s\n",i,name);
	}
	
	return 0;
}

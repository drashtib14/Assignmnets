#include<stdio.h>
int main(){
	char str[50];
	
	printf("Enter a string = ");
	fgets(str,sizeof(str),stdin);
	
	int i=0;
	while(str[i] != '\0'){
		if(str[i] != '\n'){
			printf("Character %d: %c\n",i+1,str[i]);
		}
		i++;
	}
		
	return 0;
}

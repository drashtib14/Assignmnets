#include<stdio.h>
int main(){
	char str[50];
	int len = 0;
	
	printf("Enter a string = ");
	fgets(str,sizeof(str),stdin);
	
	while(str[len] != '\0'){
		len++;
	}
	
	if(str[len - 1] == '\n'){
		len--;
	}
	
	printf("Characters in reverse order: \n");
	for(int i=len - 1;i>=0;i--){
		printf("%c\n",str[i]);
	}
	
	return 0;
}

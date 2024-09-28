#include<stdio.h>
#include<ctype.h>
int main(){
	char str[50], result[50];
	int j = 0;
	
	printf("Enter a string: ");
	fgets(str,sizeof(str), stdin);
	
	for(int i=0;i<str[i] != '\0';i++){
		if(isalpha(str[i])){
			result[j++] = str[i];
		}
	}
	result[j] = '\0';
	
	printf("String with only alphabets: %s\n",result);
	
	return 0;
}

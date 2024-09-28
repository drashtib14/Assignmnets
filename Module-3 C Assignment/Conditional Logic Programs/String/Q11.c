#include<stdio.h>
#include<ctype.h>
int main(){
	char str[50];
	
	printf("Enter a sentence: ");
	fgets(str,sizeof(str), stdin);
	
	for(int i=0;i<str[i] != '\0';i++){
		if(islower(str[i])){
			str[i] = toupper(str[i]);
		}
		else if(isupper(str[i])){
			str[i] = tolower(str[i]);
		}
	}
	
	printf("The sentence: %s",str);
	
	return 0;
}

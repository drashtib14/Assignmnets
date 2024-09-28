#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[50];
	int count = 0;
	char word[] = "is";
	int wordLen = strlen(word);	
	
	printf("Enter a string: ");
	fgets(str,sizeof(str), stdin);
	
	for(int i=0;str[i] != '\0';i++){
		if(str[i] == word[0] && strncmp(&str[i],word,wordLen) == 0){
			if((i == 0 || isspace(str[i-1])) && (isspace(str[i + wordLen]) || str[i + wordLen] == '\0')){
				count++;
			}
		}
	}
	
	printf("The word 'is' appears %d times\n",count);
	
	return 0;
}

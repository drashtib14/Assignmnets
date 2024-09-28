#include<stdio.h>
int main(){
	//hello - hll - consonant - eo - vowel
	char str[50];
	int vowels = 0, consonants = 0;
	
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);	
	
	for(int i=0;str[i]!= '\0';i++){
		char ch = str[i];
		if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
			vowels++;
		}
		else if((ch >= 'a' && ch <= 'z') || (ch >='A' || ch <= 'Z')){
			consonants++;
		}
	}
	
	printf("Vowels are: %d\n",vowels);
	printf("Consonants are: %d",consonants);
	
	return 0;
}

#include<stdio.h>
int main(){
	char str[50];
	int cntAlpha = 0, cntDigit = 0, cntChar = 0;
	
	printf("Enter any alphabet, digit or special characters: \n");
//	gets(str);
	fgets(str, sizeof(str), stdin);
	
	for(int i=0;str[i] != '\0';i++){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			cntAlpha++;
		}
		else if(str[i] >= '0' && str[i] <= '9'){
			cntDigit++;
		}
		else if(str[i]  != '\n' && str[i] != ' '){
			cntChar++;
		}
	}
	
	printf("\nAlphabets are = %d",cntAlpha);
	printf("\nDigits are = %d",cntDigit);
	printf("\nSpecial Characters are = %d",cntChar);
	
	return 0;
}

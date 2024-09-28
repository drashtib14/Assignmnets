#include<stdio.h>
#include<string.h>
void reverseString(char str[],char reversed[]){
	int length = strlen(str);
	int end = length - 1;
	
	for(int i=0;i<length;i++){
		reversed[i] = str[end - i];
	}
	reversed[length] = '\0';
}

int isPalindrome(char str[],char reversed[]){
	return strcmp(str,reversed) == 0;
}
int main(){
	char str[100],reversed[100];
	
	printf("Enter a string = ");
	fgets(str,sizeof(str),stdin);
	
	str[strcspn(str, "\n")] = '\0';
	
	reverseString(str,reversed);
	
	printf("%s",reversed);
	
	if(isPalindrome(str,reversed)){
		printf("\n%s is the palindrome string",str);
	}
	else{
		printf("\n%s is not the palindrome string",str);
	}
	
	return 0;
}

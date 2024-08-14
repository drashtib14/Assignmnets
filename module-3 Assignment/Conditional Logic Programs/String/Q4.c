#include<stdio.h>
int main(){
	char str[100];
	int wordCnt = 1;
	
	printf("Enter a string = ");
	fgets(str,sizeof(str),stdin);
	
	for(int i=0;str[i] != '\0';i++){
		if(str[i] == ' '){
			wordCnt++;
		}
	}
	
	printf("Total number of words: %d\n",wordCnt);
	
	return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	char freq[256] = {0};
	char maxChar;
	int maxFreq = 0;
	
	printf("Enter a string: ");
	fgets(str,sizeof(str), stdin);	
	
	for(int i=0;str[i] != '\0';i++){
		freq[str[i]]++;
	}
	
	for(int i=0;i<256;i++){
		if(freq[i] > maxFreq && i != ' ' && i != '\n'){
			maxFreq = freq[i];
			maxChar = i;
		}
	}
	
	printf("%c appears %d times\n",maxChar,maxFreq);
	
	return 0;
}

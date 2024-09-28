#include<stdio.h>
#include<string.h>
void substring(char original[],char sub[],int start,int length){
	for(int i=0;i<length;i++){
		sub[i] = original[start + i];
	}
	sub[length] = '\0';
}
int main(){
	char str[50], sub[50];
	int start, length;
	
	printf("Enter the string: ");
	fgets(str,sizeof(str), stdin);
	
	str[strcspn(str,"\n")] = '\0';
	
	printf("Enter the starting position: ");
	scanf("%d",&start);
	
	printf("Enter the length of the substracting: ");
	scanf("%d",&length);
	
	substring(str,sub,start,length);
	
	printf("Extracted substring: %s",sub);
	
	return 0;
}

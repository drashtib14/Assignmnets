#include<stdio.h>
int main(){
	char str1[50],str2[50];
	
	printf("Enter a string: ");
	fgets(str1,sizeof(str1),stdin);
	
	int i=0;
	while(str1[i] != '\0'){
		str2[i] = str1[i];
		i++;
	}
	
	str2[i] = '\0';
	
	printf("\nOriginal string: %s",str1);
	printf("Copied string: %s",str2);
	
	return 0;
}

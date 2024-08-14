#include<stdio.h>
#include<string.h>
int main(){
	char str1[50], str2[50], result[50];
	
	printf("Enter first string = ");
	fgets(str1,sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	 	
	printf("Enter second string = ");
	fgets(str2,sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	
	int i = 0,j = 0;
	
	while(str1[i] != '\0'){
		result[i] = str1[i];
		i++;
	}
	
	while(str2[j] != '\0'){
		result[i] = str2[j];
		i++;
		j++;
	}
	
	result[i] = '\0';
	
	printf("Combined string = %s\n",result);
	
	return 0;
}

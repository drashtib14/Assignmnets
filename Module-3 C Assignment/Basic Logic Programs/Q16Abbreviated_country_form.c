#include<stdio.h>
#include<string.h>
int main(){
	char country_name[200],abr[10];
	int i,j=0;
	
	printf("Enter the country name = ");
	gets(country_name);
	
	int length = strlen(country_name);
	if(country_name[length-1] == '\n'){
		country_name[length-1] = '\0';
	}
	
	i=0;
	while(country_name[i]!='\0'){
		if((i==0 || country_name[i-1]==' ') && country_name[i]!=' '){
			abr[j] = toupper(country_name[i]);
			j++;
		}
		i++;
	}
	
	printf("\nOriginal country Name = %s",country_name);
	printf("\nAbbriviated country Name = %s",abr);
	
	return 0;
}

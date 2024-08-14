#include<stdio.h>
#include<string.h>
int main(){
	char schname[200],abr[10];
	int i,j=0;
	
	printf("Enter the school name = ");
	gets(schname);
	
	int length = strlen(schname);
	if(schname[length-1] == '\n'){
		schname[length-1] = '\0';
	}
	
	i=0;
	while(schname[i]!='\0'){
		if((i==0 || schname[i-1]==' ') && schname[i]!=' '){
			abr[j] = toupper(schname[i]);
			j++;
		}
		i++;
	}
	
	printf("\nOriginal School Name = %s",schname);
	printf("\nAbbriviated School Name = %s",abr);
	
	return 0;
}

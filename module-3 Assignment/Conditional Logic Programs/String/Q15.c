#include<stdio.h>
#include<string.h>
int main(){
	char str[50],smallest[50],largest[50];
	int start = 0,length = 0;
	
	printf("Enter a string = ");
	fgets(str,sizeof(str), stdin);
	str[strcspn(str,"\n")] = '\0';
	
	sscanf(str,"%s",smallest);
    strcpy(largest,smallest);
		
	for(int i=0;i <= strlen(str);i++){
		if(str[i] == ' ' || str[i] == '\0'){
			char word[50];
			strncpy(word,str + start,length);
			word[length] = '\0';
			
			if(strlen(word) < strlen(smallest)){
				strcpy(smallest,word);
			}
			if(strlen(word) > strlen(largest)){
				strcpy(largest,word);
			}
			start = i +1;
			length = 0;
		}
		else{
			length++;
		}
	}
	
	printf("Smallest word = %s\n",smallest);
	printf("Largest word = %s\n",largest);
	
	return 0;
}

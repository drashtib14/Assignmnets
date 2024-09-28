#include<stdio.h>
int main(){
	char str1[50], str2[50];
    int equal = 1, i=0;;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }
    
    if (str1[i] != '\0' || str2[i] != '\0') {
        equal = 0;
    }

    if (equal) {
        printf("The strings are equal.\n");
    }
	else {
        printf("The strings are not equal.\n");
    }
	
	return 0;
}

#include<stdio.h>
int main(){
	int angle1,angle2,angle3;
	
	printf("Enter angles of triangles: ");
	scanf("%d%d%d",&angle1,&angle2,&angle3);
	
	if(angle1+angle2+angle3==180 && angle1 > 0 && angle2 > 0 && angle3 > 0){
		printf("The triangle can be formed");
	}
	else{
		printf("Triangle can't be formed");
	}
	
	return 0;
}

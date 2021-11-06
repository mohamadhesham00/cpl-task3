#include<stdio.h>
int main (){
	float x;
	printf("enter a number: ");
	scanf("%f",&x);
	if (x>=0 && x<=100){
		if ( x>75 && x<=100){
			printf("interval (75,100]");
		}
		if ( x>50 && x<=75){
			printf("interval (50,75]");
		}
		if ( x>25 && x<=50){
			printf("interval (25,50]");
		}	
		if ( x>=0 && x<=25){
			printf("interval [0,25]");
		}
	}
	else {
		printf ("out of intervals");
	}
	return 0;
}

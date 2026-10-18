//write a program to check weather a leap year or not .
#include<stdio.h>
int main (){
	int leapyear;
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%400==0||year%4==0&& year%100!=00){
		printf("leap year");
		

	}
	else {
		printf("not leap year");
		
	}	
	return 0;
	
}

//calculate the simple intrest
#include<stdio.h>
int main(){
	int si;
	int p;
	int r;
	int t;
	printf("enter the principle amount \n");
	scanf("%d",&p);
	printf("enter the rate of intrest \n");
	scanf("%d",& r);
	printf("enter the time  in year \n");
	scanf("%d",&t);
	si=p*t*r/100;
	printf("the simple intrest is %d \n",si);
	return 0;
	

}

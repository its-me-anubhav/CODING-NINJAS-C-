#include<stdio.h>
int main()
{
	int a,b;  //where a,b,c are defined as principle interest,rate and time respectively.
	float c;
	printf("enter numbers");
	scanf("%d%d%f", &a,&b,&c);
	float si = a*b*c/100;  // formula for counting simple interest.
	printf("%f",si);
	return 0;
}

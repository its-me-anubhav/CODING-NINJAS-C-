 #include<stdio.h>
int main()   
{  
    float radius, area;  
    printf("Enter radius of circle\n");  
    scanf("%f", & radius); 
	float PI=3.14; 
    area = PI * radius * radius;  
    printf("Area of circle : %f\n", area);
	return 0;  

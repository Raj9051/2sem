#include <stdio.h>
#include <math.h>


int main(){

	//Q1
	printf("Hello World\n\n");
	
	//Q2
	int integer;
	printf("Enter an integer:- ");
	scanf("%d",&integer);
	printf("you entered %d\n\n",integer);

	//Q3
	int num1, num2;
	printf("Enter Two numbers to add\n");
	scanf("%d %d",&num1,&num2);
	printf("sum of the digits you entered is %d\n\n",num1 + num2);

	//Q4
	int a1,b1;
	float remainder,quotient;
	printf("Enter divisor and divident\n");
	scanf("%d %d",&a1,&b1);
	remainder = a1%b1;
	quotient = a1/b1;
	printf("quotient = %f\nreminder = %f\n\n",quotient,remainder);

	//Q5
	int num;
	printf("Enter the number to find even or odd:- ");
	scanf("%d",&num);
	printf("The number you entered is %s\n\n",(num%2 == 0)?"even":"odd");

	//Q6
	int r=2;
	//float x = pi*r*r;
	float const pi = 3.14;
	printf("radius is 2 and area is %.2f\n\n",pi*r*r);

	//Q7
	int year;
	printf("Enter the year:- ");
	scanf("%d",&year);
	if(year%4 == 0){
		if(year%100 == 0){
			if(year%400 == 0)
				printf("its a leap year\n\n");
			else
				printf("its not a leap year\n\n");
		}
		else
			printf("its a leap year\n\n");
	}	
	else
		printf("its not a leap year\n\n");

	//Q8
	int num4;
	printf("Enter the number to find even or odd:- ");
	scanf("%d",&num4);
	printf("The number you entered is %s\n\n",(num & 1 == 1)?"odd":"even");
	

	//Q9
	int digit1,digit2,digit3;
	printf("Enter three numbers\n");
	scanf("%d %d %d",&digit1,&digit2,&digit3);
	printf("the largest number is %d\n\n",(digit1 > digit2)?(digit1 > digit3?digit1:digit3):(digit2 > digit3?digit2:digit3));

	//Q10
	int a,b;
	printf("Enter 2 two-digit number");
	scanf("%d %d",&a, &b);
	printf("      %d\n",a);
	printf("      %d\n",b);
	printf("__________\n");
	printf("      %d\n",a*(b%10));
	printf("      %d\n",a*(b/10));
	printf("__________\n");
	printf("      %d\n",a*b);

}
	
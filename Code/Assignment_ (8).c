#include <stdio.h>
#include <ctype.h>
void alphabet();
void swap_without_c();
void swap_c();
void floating();
void odd_even();
void check_no();
void triangle();
void conversion();

int main(){
//	alphabet();
//	swap_without_c();
//	swap_c();
//	floating();
//	odd_even();
//	check_no();
//	triangle();
	conversion();
	return 0;
}


//qestion 4
void alphabet(){
	char ch;
	printf("Enter an alphabet to check if it is: ");
	scanf("%s",&ch);
	if(isalpha(ch)){
		printf("\nIt is an alphabet.");
	}
	else {
		printf("\nIt is not an alphabet.");
	}
}

//quetsion 5.1
void swap_without_c(){
	int a,b;
	printf("Enter two no. to swap: ");
	scanf("%d %d",&a,&b);
	printf("Initially a=%d and b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping a=%d and b=%d",a,b);
}

//question 5.2
void swap_c(){
	int a,b,c;
	printf("Enter two no. to swap: ");
	scanf("%d %d",&a,&b);
	printf("Initially a=%d and b=%d",a,b);
 	c=a;
 	a=b;
 	b=c;
	printf("\nAfter swapping a=%d and b=%d",a,b);
}

//question 6
void floating(){
	float a;
	printf("Enter a flaot no. and the rightmost of the integral part will print: ");
	scanf("%f",&a);
	printf("The rightmost of the integral part is %d",(int)a%10);
}

//question 7
void odd_even(){
	int a;
	printf("Enter a no. to check it if is odd or even: ");
	scanf("%d",&a);
	if(a%2==0){
		printf("The number is even.");
	}else printf("The number is odd.");
}

//question 8
void check_no(){
	double a;
	printf("Enter a no. to check if it is +ve -ve or 0: ");
	scanf("%lf",&a);
	if(a>0){
		printf("The no. is positive");
	}else if(a<0){
		printf("The no. is negative.");
	}else printf("The no. is zero.");
}

//question 9
void triangle(){
	float a,b,c;
	printf("Enter the sides of the triangle: ");
	scanf("%f %f %f",&a, &b, &c);
	if(a!=b && b!=c && c!=a){
		printf("The triangle is scalene.");
	}else if(a==b&&b==c){
		printf("The triangle is equilateral.");
	}else printf("The triangle is isosceles.");
}

//question 10
void conversion(){	
	float in;
	printf("Enter value in inch to convert in cm: ");
	scanf("%f",&in);
	printf("The equivalent value in cm: %.2f",in*2.54);
}

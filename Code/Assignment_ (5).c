/******************************************************

Assignment 8 POINTERS
Submitted by:. Prashant Dodiya
Admission no:. U19EC026  (A-028)

******************************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>

void swap_ch(char *x, char *y);
void permute(char *a, int b, int c);
void question1();
void question2();
void swap(int *x, int *y);
void question3();
void question4();
void increment(int *v);
void question5();
void update(int *a, int *b);
void question6();

int main (void) {
	question1();	
	question2();
	question3();
	question4();
	question5();
	question6();	
	return 0;	
}


void swap_ch(char *x, char *y){
	char temp= *x;
	*x = *y;
	*y = temp;
}

void permute(char *a, int b, int c){
	int i;
	if(b==c)
		printf("%s\n",a);
	else{
		for(i=b;i<=c;i++){
			swap_ch((a+b),(a+i));
			permute(a,b+1,c);
			swap_ch((a+b),(a+i));
		}
	}
}

void question1(){
	printf("Output of the question 1:\n");
	printf("Enter the string for permutation:");
	char s[200];
	gets(s);
	int n=strlen(s);
	printf("All the permutations of string are:\n");
	permute(s,0,n-1);
	getch();
	printf("\n_____________________________________________________\n\n");
}

void question2(){
	printf("Output of the question 2:");
	int a[10]={1,2,3,4,5,6};
	int *p;		 		  //DECLARATION 
	p = NULL;             //INITIALIZING 
	printf("\nThe address of pointer BEFORE is %p",p);
	p=&a[5];              //ASSIGNING
	printf("\nThe address of pointer AFTER is %p",p);      //ACCESSING
	printf("\nThe value of pointer AFTER is %d",*p);	   //ACCESSING
	printf("\n_____________________________________________________\n\n");
}

void swap(int *x, int *y){
	int temp= *x;
	*x = *y;
	*y = temp;
}

void question3(){
	printf("Output of the question 3:\n");
	int a,b;
	printf("Enter the values of a and b to swap:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("Now the values of a= %d and b= %d",a,b);
	printf("\n_____________________________________________________\n\n");
}

void question4(){
	printf("Output of the question 4:\n");
	int a=10,*p;
	p=&a;
	printf("The value of a is %d",a);
	printf("\nEnter new value of a:");
	scanf("%d",&*p);
	printf("The value of a is %d",a);
	printf("\n_____________________________________________________\n\n");
}

void increment(int *v) {
	(*v)++;
}

void question5(){
	printf("Output of the question 5:\n");
	int a;
    printf("Enter the value of a= ");
    scanf("%d",&a);
	increment(&a);
    printf("The incremented value of a= %d", a);
	printf("\n_____________________________________________________\n\n");
}

void update(int *a, int *b){
	int temp = *b;
	if(*a > *b)
	*b = *a-*b;
	else
	*b = *b-*a;
	*a+= temp;
}

void question6() {
	printf("Output of the question 6:\n");
	int a,b;
	printf("Enter the values of a and b:\n");
	scanf("%d\n%d",&a,&b);
	update(&a,&b);
	printf("The values are \na= %d \nb= %d",a,b);
	printf("\n_____________________________________________________\n\n");
}

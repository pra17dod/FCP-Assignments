//Assignment#1
//By Prashant Dodiya

#include <stdio.h>
  simple_io();
  float_print();
  number_manip();
  value_manip();
  pattern();
  name_print();
  string_print();
  area_circle();
  s_interest();
  conversion();
  math_formula1();
  math_formula2();
  math_formula3();

int main(){
//	simple_io();           // 1.1
//    float_print();         // 1.2
//    number_manip();        // 1.3
//	value_manip();	       // 1.4
//	pattern();             // 1.5
	name_print();          // 1.6
	string_print();        // 1.7
	area_circle();         // 2
	s_interest();          // 3
	conversion();          // 4
	math_formula1();       // 5.1
	math_formula2();       // 5.2
	math_formula3();       // 5.3
	 return 0;
}


// question 1.1
 simple_io(){
	 int a;
	 printf("Enter a int number to print:");
	 scanf("%d",&a);
	 printf("The int number entered is %d \n", a);
 }
// question 1.2
 float_print(){
	 float a;
	 printf("Enter a float number to print:");
	 scanf("%f",&a);
	 printf("The float number entered is %f\n", a);
 }
// question 1.3
 number_manip(){
	 float a;
	  printf("Enter a float number to print till 2 decimal value:");
	  scanf("%f",&a);
	  printf("The manipulated number entered is %.2f\n", a);
 }
 // question 1.4
  value_manip(){
	  double a;
	  printf("Enter large number to print till 2 decimal value:");
	  scanf("%lf",&a);
	  printf("The manipulated number entered is %.2lf\n", a);
  }
 // question 1.5
 pattern(){
	 double a;
	  printf("Enter large number to print:");
	  scanf("%lf",&a);
	  printf("\n%.0lf * %.0lf\n",a,a);
  }
// question 1.6
 name_print(){
	 char name[50];
	 printf("Enter your full name: ");
	 gets(name);
	  printf("\nYour full name is ");
	 puts(name);
 }
 // question 1.7
 string_print(){
	 char str[100];
    printf("Enter a string: ");
	 gets(str);
	 puts("The string enetered is ");
	 puts(str);
 }
 // question 2
 area_circle(){
	 const pi = 3.14;
	 float radius,c;
	 printf("Enter the radius to calculate the area of the circle: ");
	 scanf("%f", &radius);
	 c=pi*radius*radius;
	 printf("\nThe area of the circle is %.3f\n", c);
 }
 // question 3
 s_interest(){
	 float amount, time, rate;
	 printf("\nEnter the Principal Amount for interest: ");
	 scanf("%f", &amount);
	 printf("\nEnter the Rate for interest: ");
	 scanf("%f", &rate);
	 printf("\nEnter the Time Period for interest: ");
	 scanf("%f", &time);
	 printf("\nThe Simple Interest calculated is %.2f\n",(amount*time*rate)/100);
 }
 // question 4
 conversion(){
	 float f;
	 printf("Enter value in Fahrenheit to convert :");
	 scanf("%f", &f);
	 printf("\nEquivalent of entered value in Celsius is %d\n", (f-32)*5/9);
 }
 // question 5.1
 math_formula1(){
	 int a,b;
	 printf("Enter two digits to calculate (a+b)^2 :");
	 scanf("%d %d",&a,&b);
	 printf("\nThe value calculated is %d\n", (a*a)+(b*b)+(2*a*b));
 }
 // question 5.2
  math_formula2(){
	  int a,b;
	  printf("Enter two digits to calculate (a-b)^2 :");
	  scanf("%d %d",&a,&b);
	  printf("\nThe value calculated is %d\n", a*a+b*b-2*a*b);
  }
 // question 5.3
   math_formula3(){
	   int a,b,c;
	   printf("Enter three digits to calculate a^3 + b^3 +c^3 - 3abc :");
	   scanf("%d %d %d",&a,&b, &c);
	   printf("\nThe value calculated is %d\n", a^3 + b^3 +c^3 - 3*a*b*c);
   }

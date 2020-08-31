#include <stdio.h>
 
void pass_fail();
void calculator();
void display_day();
void leap_year();
void divisibility();
void perfect_number();
   
  int main(){
     //pass_fail();
     //calculator();
     //display_day();
     //leap_year();
	 //divisibility();
	 perfect_number();    
       return 0;
  }

// question 1
void pass_fail(){
    int marks;
  	printf("Enter your Marks: ");
  	scanf("%d", &marks);
  	if(marks>35 && marks<=100){
  		printf("You are pass.");
	  }
    else if(marks>100){
    	printf("Enter valid marks.");
	    }
	else 
	   	printf("Your are fail.");
    }
    
 // question 2   
void calculator(){
    	float result;
    	char operation;
    	 float a,b;
    	printf("Welcome to Prance Calculator\n Enter\n a for addition \n s for subraction \n m for multiplication \n d for division \n");
    	scanf("%s",&operation);
    	printf("Enter two no. for the operation and first no. must be greater than second: ");
    	scanf("%f %f",&a,&b);
    	switch (operation){
    	   	case 'a':
    	   		result= a+b;
    	   	    break;	
    		case 's':
    			result= a-b;
    			break;
    		case 'm':
    	   		result= a*b;
    	   	    break;	
    		case 'd':
    			result= a/b;
    			break;
    		default :
    			printf("Enter a valid choice.");
    		}
    	
    		printf("Result of the operation: %.2f",result);
     	}

// question 3     	
void display_day(){
    	int i;
    	printf("Enter the no. to display its corresponding day: ");
    	scanf("%d",&i);
    	switch(i){
    		case 1:
    			printf("Monday");
    			break;
    		case 2:
    			printf("Tuesday");
    			break;
    		case 6:
    			printf("Saturday");
    			break;
    		case 3:
    			printf("Wednesday");
    			break;
    		case 4:
    			printf("Thursday");
    			break;
    		case 5:
    			printf("Friday");
    			break;
    		case 7:
    			printf("Sunday");
    			break;
    		default:
    			printf("Enter a valid no. ");
		}
	}
	
// question 4
void leap_year(){
		int year;
		printf("Enter the year to check for leap year: ");
		scanf("%d", &year);
		if(year%4==0)
		  printf("It is a leap year.");
		else 
		  printf("It is not a leap year.");
    }

// question 5
void divisibility(){
    	printf("Printing no. divisible by 6 but not by 4 between 1 to 100\n");
    	int i=1;
    	for(i; i<101; ++i){
    	   if (i%6==0 && i%4!=0)
    	     printf("%d\n",i);
		}
	}	  

// question 6
void perfect_number(){
    	int n, sum;
    	printf("Enter a no. to check for perfect no.:");
    	scanf("%d",&n);
    	int b=1;
    	for(b;b<n;++b){
    	if(n%b==0){
    		sum+=b;
		}
	  }
    	if(sum==n){
    		printf("It is a perfect no.");
		} else
		printf("It is not a perfect no.");
	}

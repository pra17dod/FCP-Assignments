#include <stdio.h>
#include <string.h>

void question1();
struct bookstore{
	unsigned int ISBN;
	char Title[100];
	unsigned int Price; 
}book[100];
struct bookstore inputdata(int i);
void displaydata(struct bookstore book[],int *n);

void question2();
struct shop{
	char item_name[50];
	unsigned int quantity;
	float price;
}item[100];
struct shop getdata(int i);
void amount(struct shop item[],int *n);

void question3();
struct time{
	int seconds;
	int minutes;
	int hours;
};
void time_difference(struct time t1, struct time t2, struct time *diff);

void question4();
struct student
{
char name[50];
int roll_no;
struct subject
{
int marks;
}a,b,c,d,e;
}stu[100];
struct student info(int i);
void displaydetail(struct student stu[],int *n);

int main(){
	question1();
	question2();
	question3();
	question4();
	return 0;
}

void question1(){
	printf("Output of question 1:\n");
	int i,n;
	printf("Enter the no. of book's data to input:");
	scanf("%d",&n);
	struct bookstore book[n]; 
	for(i=0;i<n;i++){
		book[i]= inputdata(i);
	}
	displaydata(book,&n);
	printf("\n_________________________________________________\n\n");
}

struct bookstore inputdata(int i){
	printf ("Enter the following details of book %d:\n",i+1);
	printf ("ISBN : ");
	fflush(stdin);
	scanf("%d",&book[i].ISBN);
	printf ("Title: ");
	fflush(stdin);
	gets(book[i].Title);
	printf ("Price: $");
	fflush(stdin);
	scanf("%d",&book[i].Price);
	return book[i];
}

void displaydata(struct bookstore book[],int *n){
	int i=0;
	for(i=0;i<*n;i++){
	printf ("\nFollowing are the details of book %d:",i+1);
	printf ("\nISBN : %d",book[i].ISBN);
	printf ("\nTitle: %s",book[i].Title);
	printf ("\nPrice: $%d",book[i].Price);
	}
}

void question2(){
	printf("Output of question 2:\n");
	int i,n;
	printf("Enter the no. of items:\n");
	scanf("%d",&n);
	struct shop item[n]; 
	for(i=0;i<n;i++){
		item[i]= getdata(i);
	}
	amount(item,&n);
	printf("\n_________________________________________________\n\n");
}

struct shop getdata(int i){
	printf ("Enter the details of item %d:\n",i+1);
	printf ("Name: ");
	fflush(stdin);
	gets(item[i].item_name);
	printf ("Quantity: ");
	fflush(stdin);
	scanf("%d",&item[i].quantity);
	printf ("Price: $");
	fflush(stdin);
	scanf("%f",&item[i].price);
	return item[i];
}

void amount(struct shop item[],int *n){

	int i=0;
	float amount;
	for(i=0;i<*n;i++){
		amount += (item[i].quantity)*(item[i].price);
	}
	printf("Total amount of all the items is $%.2f",amount);
}

void question3(){
	printf("Output of question 3:\n");
	struct time s_time, e_time, time_diff;
	printf("Enter the start_time in HH:MM:SS format: ");
	scanf("%d %d %d",&s_time.hours,&s_time.minutes,&s_time.seconds);
	printf("Enter the end_time in HH:MM:SS format: ");
	scanf("%d %d %d",&e_time.hours,&e_time.minutes,&e_time.seconds);
	time_difference(s_time,e_time,&time_diff);
	printf("The difference between the time_periods is ");
	printf("%02d:%02d:%02d in HH:MM:SS format",time_diff.hours,time_diff.minutes,time_diff.seconds);
	printf("\n_________________________________________________\n\n");
}

void time_difference(struct time t1, struct time t2, struct time *diff){
	while(t1.seconds>t2.seconds){
		--t2.minutes;
		t2.seconds+=60;
	}
	diff->seconds= t2.seconds -t1.seconds;
		while(t1.minutes>t2.minutes){
		--t2.hours;
		t2.minutes+=60;
	}
	diff->minutes= t2.minutes -t1.minutes;
	diff->hours= t2.hours - t1.hours;
}

void question4(){
	printf("Output of question 4:\n");
	int i,n;
	printf("Enter the no. of students:");
	scanf("%d",&n);
	struct student stu[n]; 
	for(i=0;i<n;i++){
		stu[i]= info(i);
	}
	displaydetail(stu,&n);
	printf("\n_________________________________________________\n\n");
}

struct student info(int i){
	printf("\nEnter information of student %d:\n",i+1);
	printf("Enter name: ");
	fflush(stdin);
	gets(stu[i].name);
	printf("Enter roll number: ");
	fflush(stdin);
	scanf("%d",&stu[i].roll_no);
	
		printf("Enter marks in Maths    : ");
		scanf("%d", &stu[i].a.marks);
		printf("Enter marks in Science  : ");
		scanf("%d", &stu[i].b.marks);
		printf("Enter marks in English  : ");
		scanf("%d", &stu[i].c.marks);
		printf("Enter marks in Sociology: ");
		scanf("%d", &stu[i].d.marks);
		printf("Enter marks in Geography: ");
		scanf("%d", &stu[i].e.marks);
	return stu[i];
}

void displaydetail(struct student stu[],int *n){
	int i;
	for(i=0;i<*n;i++){
	printf("Student %d info:\n",i+1);
	printf("Name: %s\n ",stu[i].name);


	printf("Roll number: %d\n",stu[i].roll_no);

	printf("Marks in Maths    : %d\n",stu[i].a.marks);
	printf("Marks in Science  : %d\n",stu[i].b.marks);
	printf("Marks in English  : %d\n",stu[i].c.marks);
	printf("Marks of Sociology: %d\n",stu[i].d.marks);
	printf("Marks of Geography: %d\n",stu[i].e.marks);

	if((stu[i].a.marks<35)|| (stu[i].b.marks<35) || (stu[i].c.marks<35) || (stu[i].d.marks<35) || (stu[i].e.marks<35))
	printf("He/She is Fail\n");
	else
	printf("He/She is Pass\n");
	}
}


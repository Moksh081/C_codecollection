//STRUCTURE IN C LANGUAGE :
/*

STRUCTURE : way to group variables
          : collection of dissimilar elements
          : creating new data type : non primitive data type : coustomised / user - defined datatype.
syntax :


struct tag{
//declare member variables
};

*/
/* // eg . : can be defined in or out the function
struct Student{
	int rollno.;         //no memory consumed because no varible made as of Student
	char name[20];       //these are member variables , not have there own identity
	int dd,mm,yyyy;
};
*/


// must use keyword : struct before using the coustomised datatype like date or student 
// no memory will consume in defining the structure(making datatype) , memory will consume when using datatype we are going to declare variable.
/*
2 ways to assign value :

struct date 
{
int d ,m,y;
}d2;                    //declaring variable d2
void main(){
struct date today,d1;      //declaring variables : today , d1
// struct date today = {25,12,2022};   //initialising 
//or
today.d = 25; 
today.m = 12;
today.y = 2022;
//want to copy assigned values to today in d1

d1.d = today.d;
d1.m = today.m;
d1.y = today.y;

// orr
  d1 = today;

}
*/


//want to take input from user :

/*
struct date{
  int d,m,y;
};
 void main(){
 	struct date d1;
   printf("ENTER TODAYS DATE:\n");
   scanf("%d %d %d",&d1.d,&d1.m,&d1.y);
   printf("Date : %d-%d-%d",d1.d,d1.m,d1.y);
}
*/
//single book details(name , id, price).
/*
struct book{
	char name[50];
	int id;
	float price;
};
int main(){
	struct book a;
	printf("Enter book name , id , price :\n");
	gets(a.name);
	scanf("%d",&a.id);
	scanf("%f",&a.price);
	printf(" Book : %s \n Book id : %d \n Book price : %f", a.name,a.id,a.price);
}
*/

//students detail

/*
#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	float marks;
	
};
int main(){
	struct student s[5];
		int i;
	printf("Enter students record :\n");
	for(i=1;i<=5;i++){
		printf("Enter roll no. of student no. %d : \n",i);
		scanf("%d",&s[i].rollno);
		printf("Enter name of student no. %d : \n",i);
	    scanf("%s",s[i].name);
		printf("Enter marks of student no. %d : \n",i);
		scanf("%f",&s[i].marks);
	}
	printf("Students record");
	for(i=1;i<=5;i++){
		printf("Students roll no.: %d \n",s[i].rollno);
		printf("Students name : %s \n",s[i].name);
		printf("Students marks : %f \n",s[i].marks);
	}
	return 0;
}
*/

#include<iostream>
using namespace std;
struct book{
	char name[20];
	int price;
	int id;
}a;
void main(){
	int n;
	cout<<"NO. OF BOOKS : "<<endl;
	cin>>n;
	for(int i=0; i<=n;i++){
		cout<<"ENTER DETAILS OF BOOK NO. : "<<i+1<<endl;
		cout<<"NAME  : "<<endl;
		cin>>a.name[i];
		cout<<"ID  : "<<endl;
		cin>>a.id[i];
		cout<<"PRICE  : "<<endl;
		cin>>a.price[i];
	}
	for(int i=0; i<=n;i++){
		//cout<<"ENTER DETAILS OF BOOK NO. : "<<i+1<<endl;
		cout<<"NAME  : "<<endl;
		cout<<a.name[i];
		cout<<"ID  : "<<endl;
		cout<<a.id[i];
		cout<<"PRICE  : "<<endl;
		cout<<a.price[i];
	}
}


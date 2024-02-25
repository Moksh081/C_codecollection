//            #include<string.h>

//Write a C program to find length of a string.
/*
#include<stdio.h>
int main(){
	char A[100];
	int i=0;
	printf("Enter any string");
	gets(A);
   while(A[i]!='\0'){
   	i++;
   }
   printf("%d",i);             //5 size : 6 elements because one is '\0' , but in array for size 5 : there are only 5 elements ./
}
*/

//C program to concatenate two strings
/*
#include<stdio.h>
int main(){
	char str1[100], str2[100];
	int i=0,j=0;
	printf("ENTER STRING 1 :\n");
	gets(str1);
	printf("ENTER STRING 2 :\n");
	gets(str2);
	while(str1[i] != '\0')
	{
		i++;
	}
	while(str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	printf("Concatenated string = %s",str1);
}
*/

//oooooooooooooooooooooooooooorrrrrrrrrrrrr

//to add or merge two string use direct : 

/*      #include<string.h>
         strcat(str1, str2);

    printf("Concatenated string = %s", str1);
*/


// copy string :
/*
#include<stdio.h>
int main(){
	char str1[100], str2[100];
	int i=0;
	printf("ENTER STRING 1 :\n");
	gets(str1);
    while(str1[i] != '\0'){
    	str2[i] = str1[i];
    	i++;
	}
	str2[i] = '\0';
	printf("%s \n",str2);
		}
*/

//oooooooooooooooooooooorrrrrrrrrrrrrrrrrrrrrr

//    "%s",strcpy(str1,str2)

//COMPARE THE STRING :
/*
#include<stdio.h>
int main(){
	char str1[100], str2[100];
	int i=0,j=0;
	printf("ENTER STRING 1 :\n");
	gets(str1);
	printf("ENTER STRING 2 :\n");
	gets(str2);
	while(str1[i] != '\0' && str2[i] != '\0')
		{
			if(str1[i] != str2[i]){
				j=1;
				break;
			}
			i++;
		}
		if(j==0 && str1[i] == '\0' && str2[i] == '\0'){
			printf("STRING SAME");
		}else{
			printf("STRING NOT SAME");
		}
}
*/

//count vowels :
/*
#include<stdio.h>
int main(){
	int i=0,vowel=0;
	char str[100];
	printf("Enter STRING");
	gets(str);
	int n = strlen(str);
	while(str[i] != '\0'){
		if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
			vowel ++;
		}
		i++;
	}
	printf("%d",vowel);
}
*/



// STRING TABLE :

//similar as array but in array , a[2][2] : this 2 represents rows and columns .

//but in case of string : str[2][3] : table

/*
#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
  char Names[3];
  printf("enter 3 string");
  for(i=0;i<3;i++){
  	gets(Names[i]);
  }
  for(i=0;i<3;i++){
  		printf("%s",Names[i]);
  }
}
*/

//C program to convert lowercase string to uppercase
/*
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    int i;

    printf("Enter your text : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
       
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string : %s",str);
    return 0;
}
*/

// LINEAR SEARCH :
// https://codeforwin.org/2015/11/c-program-to-find-first-occurrence-of-word-in-string.html


//REVERSE STRING :
/*
#include<stdio.h>
int main(){
	char str1[100];
	int i=0;
	printf("ENTER STRING 1 :\n");
	gets(str1);
	for(i=strlen(str1); i>=0; i--)
	printf("%c",str1[i]);
	}
	*/

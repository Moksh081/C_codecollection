/* average of 10 nos.

#include<stdio.h>
int main(){
	int a[10];
	int i,sum=0 ;
	float d;
	printf("Enter 10 nos.");
	for(i=0; i<10;i++){
		scanf("\n %d",&a[i]);
	}
		for(i=0; i<10;i++){
			sum = sum + a[i];
			 d = sum/10;
		}
		printf("\n %f",d);
	return 0;
}
*/
// frequency of only alphabets

#include<stdio.h>
int main(){
	char freq[10] = "moksh";
	int i=0;
	int n[26];
	while(freq[i]!='/0'){
	n[freq[i]-'a']++;
	i++;
	}
	for(i=0;i<26;i++){
		if(n[i] != 0);
		printf("%c - %d",freq[i],n[freq[i]]);
	}
}
/*
#include<stdio.h>
int main(){
	int a[5] = {10,50};                          // remaining ones are 0 
	int i;                                        //declare krte wkt hi initialise krdene pr 0 ata hai wrna garbage value aati hai 
	for(i=0; i<5;i++){
		printf("\n %d",a[i]);
	}
	return 0;
}
*/

/* agar       
1. int arr[];         : error
2. int arr[] = {10,20,30}   : no error it will take size of arr = no. of elements assigned;
3. if   
int arr[2] = {10,20,30}    : error
4. 
int arr[2]= {10,20}
but while using loop we inc the value of i to more than 2 , no error , the adjacent space will be assigned to the value in the array .
*/

//sorting : asc order 
/*
#include<stdio.h>
int main(){
	int a[5] = {10,20,30,50,40};
	int i=0,j;
	while(i<5){
	for(j=i+1;j<5;j++){
		if(a[i]>a[j]){
			int temp = a[i];
			 a[i] = a[j];
			a[j] = temp;
		}
		}
		printf("\n %d", a[i]);
		
		 i++;
	}
 return 0;
}
*/

// desc order sorting
/*
#include<stdio.h>
int main(){
	int arr[5],i,j;
	printf("Enter 5 elements of the array");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]<arr[j]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
		printf("%d", arr[i]);
	}
	return 0;	
}
*/

// largest no. :
/*
#include<stdio.h>
int main(){
	int arr[5],i,j;
	printf("\n Enter 5 nos.: \n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
				int temp = arr[j];
				arr[j]=arr[i];
				arr[i]= temp;
			}
		}
	}
		printf("%d", arr[4]);
}
*/

//LINEAR SEARCH :
/*
#include<stdio.h>
int main(){
	int arr[]={10,20,30,40,50};
	int i,j;
	printf("Enter no. need to check ");
	scanf("%d",&j);
	for(i=0;i<5;i++){
		if(arr[i] == j){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
*/

//dimension : kitni direction mein ham isse measure kar skte hai 
/*   2d array : array of arrays
 arr[2][3] : 2 blocks mein 3 dabbe.   : vertical / horizontal , [2] : rows , [3] : coloumn
 */
 
 //addition of matrices 
 
 /*
 #include<stdio.h>
 int main(){
 	int A[3][3],B[3][3],C[3][3],i,j;
 	printf("Enter 9 nos. for matrix A :\n");
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			scanf("%d",&A[i][j]);
		 }
	 }
	 printf("Enter 9 nos. for matrix B : \n");
	 for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			scanf("%d",&B[i][j]);
		 }
	 }
	 for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 		C[i][j]=A[i][j]+B[i][j];
 		printf("%d", C[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
 }
 */
 
 // Transpose of the matrix :
 /*
 #include<stdio.h>
 int main(){
 	int A[3][3],B[3][3],i,j;
 	printf("Enter 9 nos. in matrix A : \n");
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			scanf("%d",&A[i][j]);
		 }
	 }
	 for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			B[i][j] = A[j][i];
 			printf("%d",B[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
 }
 */
 
 //Write a C program to read and print elements of array. - using recursion.
 /*
 #include<stdio.h>
 int array( ){
 	int main(){
 		int n;
 		printf("Enter length of the array");
 		scanf("%d",&n);
 		array(n);
	 }
	 int array(int x){
	 	printf("Enter %d elements : \n ", x);
	 	int i =0,arr[x];
	 	for(i=0; i<x;i++){
	 		scanf("%d", arr[i]);
		 }
		 	for(i=0; i<x;i++){
	 		printf("%d", arr[i]);
		 }
	 }
	 return 0;
 }
 */
 
 // Write a C program to print all negative elements in an array.
 /*
 #include<stdio.h>
 int main(){
 	int arr[5] = {1,0,-2,-3,4};
 	int i;
 	for(i=0; i<5;i++){
 		if(arr[i] < 0){
 			printf("%d\n",arr[i]);
		 }
		 }
	 }
*/

//Write a C program to find sum of all array elements
/*
#include<stdio.h>
int main(){
	int arr[5] = {1,2,3,4,5};
	int sum =0,i=0;
	for(i=0;i<5;i++){
		sum = sum + arr[i];
	}
	printf("%d", sum);
}
*/

// Find max and min element in the array :
/*
#include<stdio.h>
int main(){
	int arr[5] = {10,20,50,-1,30};
	int max=arr[0],min=arr[0],i=0;
	for(i=1; i<5;i++){
		if(max<arr[i]){
			max = arr[i];
		}else if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("MAx : %d ,Min : %d", max,min);
}
*/

// Write a C program to find second largest element in an array.
/*
#include<stdio.h>
int main(){
	int arr[5]={10,20,0,50,30};
	int i=0,j=0;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
			}
			}
			}
			for(i=0;i<5;i++){
				printf("%d \n", arr[i]);
			}
		printf("SECOND LARGEST ELEMENT : %d", arr[3]);
		}
*/

//Write a C program to copy all elements from an array to another array.
/*
#include<stdio.h>
int main(){
	int i=0, arr1[5] = {10,20,30,40,50} , arr2[5];
	for(i=0;i<5;i++){
		arr2[i] = arr1[i];
	} 
	for(i=0;i<5;i++){
		printf("%d \n", arr2[i]);
	} 
}
*/

// Write a C program to insert an element in an array.
/*
#include<stdio.h>

int main()
{
    int array[50], position, i, n, value;
    
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    
    printf("Enter %d elements\n", n);
    
    for (i= 0; i < n; i++)    
        scanf("%d", &array[i]);
    
    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &position);
    
    printf("Please enter the value\n");
    scanf("%d", &value);
    
    for (i = n - 1; i >= position - 1; i--)    
        array[i+1] = array[i];
    
    array[position-1] = value;
    
    printf("Resultant array is\n");
    
    for (i = 0; i <= n; i++)    
        printf("%d\n", array[i]);    
    
    return 0;
}




// DELETE AN ELEMENT 
/*
#include<stdio.h>
int main(){
	int position,i,n,arr[100];
	printf("ENTER ARRAY LENGTH N :\n");
	scanf("%d",&n);
	printf("Enter %d elements for an array : \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter position of no. which you want to delete from the array :\n ");
	scanf("%d",&position);
	if(position <0 || position > n){
		printf("INVALID");
	}else{
		for(i=position-1 ; i<n-1 ; i++){
			arr[i] = arr[i+1];
			}
				n--;
			for(i=0;i<n;i++){
				printf("%d\n",arr[i]);
			}
	}
}
*/








/*

LOGIC : 

INSERT KRNE KE LIYE :

POSITION AND NO. ENTER HOGA , BUT INDEX = POSITION -1 
THEREFORE,
insert krne ki vjah se no. aage jayenge toh hame aage se piche jayenge ,
i = n-1
i>=position -1
i--
arr[i+1] = arr[i]
arr[position - 1] = value 




but ,

while deleting 
terms piche aangyia so apan aage nu javange shuru toh 
i = position -1
i < n-1
i++
arr[i] = arr[i+1]
but size kamega for ke bahar , n--;




*/



// REVERSE ARRAY :

/*
#include<stdio.h>
int main(){
	int i, arr1[5]={10,20,30,40,50};
	for(i=4;i>=0;i--){
	   printf("%d\n",arr1[i]);
	}
}
*/


//MERGING TWO ARRAYS IN THIRD ARRAY :

/*
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], mergeArray[200];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;
    printf("Enter the size of first array : ");
    scanf("%d", &size1);
    printf("Enter elements in first array : ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the size of second array : ");
    scanf("%d", &size2);
    printf("Enter elements in second array : ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
   mergeSize = size1 + size2;
    index1 = 0;
    index2 = 0;
    for(mergeIndex=0; mergeIndex < mergeSize; mergeIndex++)
    {
        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }
         if(arr1[index1] < arr2[index2])
        {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }
    while(index1 < size1)
    {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }
    printf("\nArray merged in ascending order : ");
    for(i=0; i<mergeSize; i++)
    {
        printf("%d\t", mergeArray[i]);
    }
  return 0;
}
*/

//rotate an array
/*
#include<stdio.h>
int main(){
	int i,n,j,arr[100];
	printf("ENTER ARRAY LENGTH N :\n");
	scanf("%d",&n);
	printf("Enter %d elements for an array : \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("ROTATE ARRAY BY HOW MANY PLACES ? :\n");
	scanf("%d",&j);
	int arr1[n+j];
	for(i=0;i<n+j;i++){
		arr1[i+j] = arr[i];
	}
	for(i=0;i<n+j;i++){
		printf("%d\t",arr1[i]);
	}
}
*/



 //multiplication of matrix
/* 
 #include<stdio.h>
 int main(){
 	int arr[3][3],arr1[3][3],arr2[3][3],i,j,sum,k;
    printf("Enter 9 elemtns in arr1 :\n");
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter elemtns in arr2 :\n");
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		arr[i][j] = 0;
    			for(k=0;k<3;k++)
    	arr[i][j] += arr1[i][k] * arr2[k][j];
		}
	}
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("%d",arr[i][j]);
		}
			printf("\n");
	}
	return 0;
 }
*/

// to find diagonal elements :
/*
#include<stdio.h>
 int main(){
 	int arr[3][3],i,j;
    printf("Enter 9 elemtns in arr1 :\n");
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    	    if(i==j){
    	    	printf("%d",arr[i][j]);
			}
			printf("\n");
		}
	}
}

*/


// to print upper matrix elements :
/*
#include<stdio.h>
 int main(){
 	int arr[3][3],i,j,arr1[i][j];
    printf("Enter 9 elemtns in arr1 :\n");
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		scanf("%d",&arr[i][j]);
		}
	}
 for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    	    if(i>j){
    	    	arr1[i][j] = arr[i][j];
			}
		}
	}
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    	   printf("%d",arr1[i][j]);
		}
		printf("\n");
}
}
*/

//to find determinant of the matrix
// only find for fixed size

//SYMMETRIC MATRIX : WHOSE TRANSPOSE IS EQUAL TO A, SKEW SYMMETRIC : A TRANSPOSE = - A

// INVERSE OF 2*2
/*
#include<stdio.h>
int main(){
	int i,j;
	int a[2][2] = {{1,2},{3,4}};
	long int B = a[0][0]*a[1][1] - a[0][1]*a[1][0];        // order matrix ka nahi 0 1 2 : index wala ayega 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			printf("%d",a[i][j]);
		}
	printf("\n");
}
 printf("%ld",B);
}
*/
/*
#include<stdio.h>
int array(int* );
   int main(){
   	int *p,arr[5];
	   p = &arr[5];
   	printf("ENTER 5 ELEMENTS OF ARRAY");
   	int i=0;
   	for(i=0;i<5;i++){
   		scanf("%d",&arr[i]);
	   }
   	array(); 
   }
 int array(int *p){
 	int i,ar[5];
 	*p=ar[5]
 	for(i=0; i<5; i++){
 	printf("%d \t",ar[5]);	
	 }
	 return 0;
 }
*/

//PRINT LCM OF THREE ELEMENTS OF THE ARRAY IN THE THIRD INDEX.

/*
#include<stdio.h>
int LCM(int ,int);	
  int main(){
  	int arr[3],i,l,k;
  	printf("Enter 3 elements of an array to find the LCM :\n");
  	for(i=0;i<3;i++){
  		scanf("%d",&arr[i]);
	  }
	  int a = arr[0];
	  int b = arr[1];
	  int c = arr[2];
	 if(a<b){
	 	l = LCM(a,b);
	 }else{
	 	l = LCM(b,a);
	 }
	 if(c<l){
	 	k = LCM(c,l);
	 }else{
	 	k = LCM(l,c);
	 }
	 int arr1[4] = {a,b,c,k};
	 for(i=0;i<4;i++){
  		printf("%d\t",arr1[i]);
  	}
  		return 0;
  }
  int LCM(int a,int b){
  	int temp = b;
  	while(1){
  		if(temp%b == 0 && temp%a == 0)
  		break;
		temp++;
	  }
	  return temp;
  }
*/

//sort array : 10 20 30 40 50 , such : 30 40 50 10 20
/*
#include<stdio.h>
void array(int* );
  int main(){
  	int arr[5],i;
  	printf("Enter 5 elements :\n");
  	for(i=0;i<5;i++){
  		scanf("%d",&arr[i]);
	  }
	array(arr);
}
void array(int*p){
	int arr[5],i,j;
	for(i=0;i<5;i++){
		arr[i] = *p;
		p++;
	}
	int arr1[5];
	for(i=0;i<3;i++){
		arr1[i] = arr[i+2];
	}
	for(i=3;i<5;i++){
		arr1[i] = arr[i-3];
	}
	for(i=0;i<5;i++){
		printf("%d\t",arr1[i]);
	}
}
*/

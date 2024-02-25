//POINTERS

/*  & : address operator  or  urinary operator.
    & : take variable , give us reference no.
    * : Indirection operator or Dereferencing operator or urinary operator.
    * : take address , give variable.
    &x : way to represent the address of variable x , treated as a constant , it's not a variable 
    *j = &x , now the variable with * is special variable used to store address .
    *&x = x
    *j in printf act as dereferencing operator but while declaring *j represnt that j is a special variable , 
	in printf *j will give *(value at j) = value at address 1000.
    " *j " : is a pointer 
    #ordinary variable ka size datatype pe depend krta hai
    #pointer variable ka size always 8 bytes hota hai in 64 bit machine and datatype always int
    p = &a;
    *p = 4;  so value at a replaced by 4.
    extended concept :
    x = 5 , address : 1000
    now u want to store address of x in other variable p
    int *p;
    p = &x;
    now we get p = 1000, and some address say 2000
    now u want to store address of p in new variable q 
    int **q : because we r storing the address of pointer variable to pointer .
    **q = &p;
    so , jitne star : utne level ka pointer hoga , if no star so level 0.
    so , pointer khud jitne level ka hota hai uss se just ek kam level vale ka address rakh skta hai .
    
    POINTER ARITHMETICS :
    pointer p declared , address 1000
    if pointer is of type int , p+1 : 1004
                              , p+5 : 1020
    if pointer is of type char , p+1 : 1001 , p - q ,like operations : if p and q both of same datatype then possible .
*/


//swap 
/*
#include<stdio.h>
 int swap(int* , int*);
int main(){
	int a,b;
	printf("Enter 2 nos. :\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a=%d , b=%d",a,b);
}
   int swap(int *p, int *q){
   	int t = *p;
   	*p = *q;
   	*q = t;
   }
   */

// array : index : 0 1 2 3 
// address :      1000 1004 ....   because each variable is of 4 byte

// #####################################################   *p = a

/*

in array , 
 *p ;
 p = &a[0];   : address of index 0 stored 
 therefor , 
 *(p+1) will give a[1] 
 therefore ,
 *(p+i) = a[i] , 4 add hota jayega 
 
 p[3] = *(p+3) therefor
 p[3] = a[3];
 
 */
 
 
 //////////////////// with STRINGS 
 
 // length by using pointer in string :
 
 /*
 #include<stdio.h>
 int main(){
 char str[20] = "Bhopal";
 int l = length(str);
 }
 
 int length(char *p){
 int i;
 for(i=0; p[i]; i++){
 return i;}
}
*/

//SMA : STATIC MEMORY LOCATION : compilation ke dauran hi name , memory , scope sab decided ho
// DMA : DYNAMIC  : NO NAME ONLY ADDRESS
/* 
hamein pta nahi hai user kya dalega usko kitna jagah chahiye so use hoga DMA : 
4 fn ki baat krenge , 
1. malloc()
2. calloc()
3. realloc()
4. free()

1.  malloc(n)  where n reprsents how much bytes or size required no need to define datatype.
so , for datatype 
int *p;
p = malloc(n);   so malloc return address in block p.

returntype of malloc : void pointer.
but hamne int bnaya hai so return bhi int hona chahiye so :
p = (int*)malloc(n);    : typecasting

2. calloc : use 2 arguments , ,make an array so by default 0 value stored, return the address  
int *p;
p = calloc(5,2) : 5 block array 

3. realloc() : used when after using calloc or malloc we want to change memory .
 realloc(p,8)
 : p address ka memory 4 se 8 krdiya jayega , ham isse kam bhi kr skte hai 
 
4. free()

"kyunki in DMA's ki memory after execution life time ke liye khtm nahi hoti toh free ka use krte hai "
free(p); : release only the memory of the fn's made from malloc , calloc or realloc .

*/

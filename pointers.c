#include <stdio.h>
#include <string.h>

int main()

 {
    // & = address,    * = value,   ?: = conditional statement


// int a =45;
// printf("a = %d\n", a);
// int *ptr;
// ptr = &a; 
// *ptr = 980;
// printf("a = %d\n", a);





int a = 95;
int *ptra = &a; 
int *ptra2 = NULL; 


printf("address of a = %p\n", &ptra);      // %p Pointer
printf(" value of a = %p\n", *ptra);

printf("address of a = %x\n", &ptra);      // %x Hexadecimal representation
printf(" value of a = %x\n", *ptra);

printf("address of a = %d\n", &ptra);      // %d Signed integer
printf(" value of a = %d\n", *ptra);


printf("address of a = %d\n", &a);      
printf(" value of a = %d\n", a);


printf(" null value of a = %d\n", ptra2);







    return 0;
}
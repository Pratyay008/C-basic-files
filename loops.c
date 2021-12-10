#include<stdio.h>
int main(){



// --------------------simple loop--------------
 int a = 0;
    while (a < 100)
    {
        printf("%d\n", a);
        a++;
    }



// -------------------------basic for loop------------------------
for (int i = 0; i < 5; i++)
{
     printf("Hi ");
}



//     with new line & <=  
int a;
for (int a = 0; a <= 5; a++)
{
     printf("No-%d\n", a);
}




// -------------------------basic while loop------------------------
int i =2;
    while (i<9)  // or, (i<=9)
    {
        printf("%d\n",i);
        i++;
    }


// -------------------------do-while loop------------------------
// executes at least one time as print is executed before the condition

// print hello
  int i =2;
    do
    {
        printf("hello \n");
        i = i+1;  // or,  i++ ;
    } while (i<5);



// print numbers
  int i =2;
    do
    {
        printf("no: %d\n", i);
        i = i+1;     // or,  i++ ;
    } while (i<10);
    










    return 0;
}
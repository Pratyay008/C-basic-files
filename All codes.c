#include <stdio.h>
 // & = address,    * = value,   ?: = conditional statement

int global = 121;



int main()
{

    printf("Hello World\n");
    printf("%d\n", sizeof(int));
    printf("%f\n", sizeof(float));
    printf("%c\n", sizeof(char));

    int a = 2;
    float b = 2.4;
    char c = 'f';
    printf("%d\n", a);

    float a = 2, b = 3, c = 4;
    printf("result1 = %f\n", a / b);
    printf("result2 = %f\n", ++a);
    printf("result3 = %f\n", ++a);
    printf("result4 = %f\n", a);

    printf("%d\n", a == b);
    printf("%d\n", a < b);

    int a = 5, b = 0;
    printf("%d\n", a && b); // non-zero = yes = 1   , else =0
    printf("%d\n", a || b); //      ,,

    printf("%d\n", !a); //if = 0 so result, = 1   ,  else =0
    printf("%d\n", !b); //      ,,

    int a1 = 50, b1 = 40;
    printf("result %d\n", a1 & b1);
    //  50 =    110010     binary
    //  40 =    101000     binary
    // result = 100000 =   decimal (32)




    int a = 5, b = 4;
    a += 9; // a = a+9 => a = 5+9
    printf("R= %d\n", a);




    // & = address,    * = value,   ?: = conditional statement
    // user input
    int input;
    printf("\n give the value ");
    scanf("%d", &input);
    printf("\n you give %f as input", (float)input);

    int num1, num2;
    scanf("%d1st= ", &num1);
    scanf("%d2nd= ", &num2);
    printf("\n ans= %f ", (float)num1 / num2);




    // conditional statements
    int age; // if -else
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You cannot give vote ");
    }
    else
    {
        printf("You can give vote ");
    }




    //     if- else-if
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age < 16)
    {
        printf("You cannot drive ");
    }
    else if (age >= 16 && age <= 18)
    {
        printf("You can drive but carefully ");
    }
    else if (age >= 70 && age <= 80)
    {
        printf("You should not drive ");
    }
    else if (age >= 81)
    {
        printf("You are banned form driving ");
    }
    else
    {
        printf("You can drive ");
    }


// ------------------    Loops   ------------------
    int a = 0;
    while (a < 100)
    {
        printf("%d\n", a);
        a++;
    }



    for (int j = 0; j < 45; j++)
    {
        printf("%d\n", j);
    }



    int k;
    do
    {
        printf("system is running ");
    } while (k > 2315);



// --------------------break statements---------------------

int k;  
     for (int k = 0; k < 10; k++)
     {
        if (k<=5)
        { 
           printf(" running %d\n",k);                 
        } 
         else
         {
            break;
         }           
     }


// --------------------examples of functons---------------------
int sum(int a, int b)
{
    return a + b;
}

float average(float a, float b)
{
    return (a + b) / 2;
}

int main()
{
    printf("sum is : %d\n", sum(100, 200));
    printf("average is : %f\n", average(518.3, 259));

printf("global variable = %d ", global);




// ----------------------pointers--------------------
int a= 2154;
printf("a = %d\n", a);
int* pointer = NULL; 
if(!pointer)
{
    printf("pointer call for ");
}
pointer = &a; 
*pointer =654542;
printf("a = %d\n", a);





// ----------------------string-----------------
char n1[3] = {'h', 'i', '\0'};
char str1[54], str2[14], str3[37];
strcpy(str1, "lo"); 
strcpy(str2, "Bye"); 
// strcat(str1, str2);
// printf(" %s\n" , str1);
// printf(" %s\n" , str2);
printf("%d\n", strcmp(str1, str2));



char ch[9]={'p','r','a','t','y','a','y','9','\0'};
    int i;
    for(i=0;ch[i]!=0;i++)
    printf("%c",ch[i]);



// --------------------------structures------------------
struct Books{
    char name[30];
    char author[30];
    int price;

} book;


void printStruct(struct Books bk){
    printf("Book name is %s\n", bk.name);  
    printf("Author is %s\n", bk.author);  
    printf("price is %d\n", bk.price);  
}

int main()
{

struct Books bk1, bk2;
strcpy(bk1.name, "c programming");
strcpy(bk1.author, "Dennis");
bk1.price = 95; 

printStruct(bk1);



// -----------format specifiers--------------   
// .4f so it will take 4 spaces after point(.) 
 int i =2;
 float o =4.56145;  
 char ch = 'e';
 printf(" value of i= %d, value of o= %.4f, value of ch= %c,", i, o, ch);






    return 0;
}
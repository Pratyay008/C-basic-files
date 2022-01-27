// Sum of Natural Numbers Using Recursion
#include <stdio.h>
int sum(int num)
{
    if (num!=0)
    {
        return num + sum(num-1);    // recursive call like a loop
    } 
    else
    {
        return num;
    }  
}


int main()
{ 
    int num,result;
    printf("Enter a number :\n");
    scanf("%d", &num);
    
    result = sum(num);
    printf("Result = %d\n", result);
    return 0; 
}

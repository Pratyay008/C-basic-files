#include<stdio.h>
void display();
void array();

int main()
{
    int ageArray[5]={12,26,32,48,59};
    display(ageArray[1],ageArray[3],ageArray[4]);      // passing array elements to dispaly() function



    int arr[5];
    printf("Enter the elements the array : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    array(arr);       // passing array to array() function

      
    return 0;
}



void display(int age1, int age2, int age3)
{
    printf("%d\n", age1);
    printf("%d\n", age2);
    printf("%d\n", age3);
}




void array(int *arr)
{
    printf("Array elements are : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}
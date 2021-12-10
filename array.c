#include<stdio.h>
int main(){

// ---------------main array(input then store and print)------------

int arr[5];
    for (int i = 1; i < 6; i++)
    {
        printf("enter number for no: %d\n", i);
        scanf("%d", &arr[i]);
    }
    
    
        printf("array elements are: ");

    for (int j = 1; j < 6; j++)
    {
        printf("\t%d ", arr[j]);
    }

// ----------------------------------------------------


int arr[10] = {23,42,24,35,45,4,345,53,76,43};

for (int i = 0; i < 10; i++)
{
printf("enter number for no %d\n", i);
scanf("%d", &arr[i]);
    
}


// ----------------------- with character-----------
char c[6]={'2','w','8','5','f','9'};

for (int i = 0; i < 6; i++)
{
      printf("%c ", c[i]);
}

// printf(i[4]);











    return 0;
}
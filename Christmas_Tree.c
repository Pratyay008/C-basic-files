#include<stdio.h>
void triangle();
void pole();

int main()
{   int n;
    printf("Enter the number of lines of each section :");
    scanf("%d", &n);
    printf("-----------------Christmas Tree---------------\n\n");
    triangle(n);
    triangle(n);
    pole(n);

    return 0;
}

void triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
          for (int j = 1; j <= i*2-1; j++)
        {
            printf("*");
        }
            printf("\n");
    }
    
}

void pole(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-2; j++)
        {
            printf(" ");
        }
        printf("***\n");
        
    }
    
}

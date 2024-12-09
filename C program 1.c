#include <stdio.h>
int main()
{
    int l,b;
    printf("Enter length and breadth:");
    scanf("%d %d",&l,&b);
    if (l>0 && b>0)
    {
        printf("Area of rectangle is : %d", l * b);
        printf("\nPerimeter of rectangle is : %d", 2 * (l + b));
    }
    else
    {
        printf("Invalid input the values given should be positive");
    }
    return 0;
}
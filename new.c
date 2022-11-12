
#include <stdio.h>
#include <conio.h>
void main()
{

    int myNumber, mySum = 0;

    printf("Enter the value of myNumber...\n");
    scanf("%d", &myNumber);

    for (int i = 1; i <= myNumber; i++)
    {
        mySum = mySum + i * i;
    }
    printf("Sum of myNumber = %d", mySum);
}
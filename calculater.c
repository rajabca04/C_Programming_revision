#include<stdio.h>
#include<conio.h>

int main(){

    int N;
    int a,b,result;

    printf("Choose your operation....\n");
    printf("1 = +\n2 = -\n3 = *\n4 = /\n");
    printf("................................\n");
    scanf("%d",&N);

    switch (N)
    {
    case 1:
        
        printf("Enter value for a \n");
        scanf("%d",&a);
        printf("Enter value for b \n");
        scanf("%d",&b);

        result = a+b;

        printf("Result is %d",result);
        break;
    
    case 2:
        printf("Enter value for a \n");
        scanf("%d",&a);
        printf("Enter value for b \n");
        scanf("%d",&b);

        result = a-b;
        printf("Result is %d",result);
        break;

    case 3:
       
        printf("Enter value for a \n");
        scanf("%d",&a);
        printf("Enter value for b \n");
        scanf("%d",&b);

        result = a*b;
        printf("Result is %d",result);
        break;
    
    case 4:
       
        printf("Enter value for a \n");
        scanf("%d",&a);
        printf("Enter value for b \n");
        scanf("%d",&b);

        result = a/b;
        printf("Result is %d",result);
        break;
    }
    return 0;
}   
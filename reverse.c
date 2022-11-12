#include<stdio.h>
#include<conio.h>

int main(){
    int number,rem;
    int reverse = 0;

    printf("Enter you number..\n");
    scanf("%d",&number);

    while (number)
    {   
        rem = number%10;
        reverse = reverse*10 +rem;
        number/=10;
        
    }
    printf("%d",reverse);
    

    return 0;
}
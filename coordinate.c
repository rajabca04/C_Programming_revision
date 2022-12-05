#include<stdio.h>
#include<conio.h>

int main(){
    int firstValue,secoundValue;

    printf("enter your first value..\n");
    scanf("%d",&firstValue);

    printf("enter your secound value..");
    scanf("%i",&secoundValue);

    if(firstValue && secoundValue >0){
        printf("first qudrent..\n");

        if(firstValue && secoundValue <0){
            printf("secound qudrent\n");
        }
    }
 


    return 0;
}
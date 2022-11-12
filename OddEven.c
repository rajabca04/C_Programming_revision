#include<stdio.h>
#include<conio.h>

int main(){
    int no;
    printf("Enter you integir..\n");
    scanf("%d",&no);

    if(no%2==0){
        printf("your no is ..EVEN..\n");
    }
    else{
        printf("your no is ..ODD..");
    }
    return 0;
}
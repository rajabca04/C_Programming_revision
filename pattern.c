#include<stdio.h>
#include<conio.h>

int main(){
    for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("\t*");
        }
        printf("\n");
    } 
    for(int i=0;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf("\t*");
        }
        printf("\n");
    }
    return 0;
}
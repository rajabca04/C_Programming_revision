#include<stdio.h>
#include<conio.h>

int decimal(char c){
    int count;
    switch (c)
    {
    case 'I':
        count = 1;
        break;
    
    case 'V':
        count = 5;

    case 'X':
        count = 10;
    
    case 'L':
        count = 50;

    case 'C':
        count = 100;

    case 'D':
        count = 500;

    case 'M':
        count = 1000;

    default:
        return 0;
        break;
    }
}

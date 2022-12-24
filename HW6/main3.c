#include <stdio.h>

int main()
{
    int year = 2020;
    if (year%400 == 0){
        printf("True");
    }
    else if (year%4 == 0 && year%100!=0){
        printf("True");    
    }
    else{
      printf("False");
    }

    return 0;
}

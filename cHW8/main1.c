#include <stdio.h>

void p_spaces(int r,int rows){
    for(int i=r;i<rows;i++){
        printf(" ");
    }
}
void p_stars(int r){
    for(int i=0;i<r*2-1;i++){
        printf("*");
    }
}


int main(){
    int rows=10;
    for(int i=0;i<10;i++){
        p_spaces(i,rows);
        p_stars(i);
        printf("\n");
    }

    return 0;
}

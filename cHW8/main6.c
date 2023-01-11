#include <stdio.h>
int i=4;
void tri(){
    for(int n=0;n<i;n++){
        for (int k=1;k<i-n;k++){
            printf(" ");
        }
        for(int j=0;j<=n*2;j++){
            printf("*");
        }
        printf("\n");
    }
}
void stars(){
    int x=0;
    while (x<(i-1)*2+1){
        printf("*");
        x++;
    }
}
void sqrs(){
    stars();
    printf("\n");
    for (int k=1;k<i;k++){
        printf("*");
        for(int j=1;j<(i-1)*2;j++){
            printf(" ");
        }
        printf("*\n");
    }
    stars();
}
int main(){
    tri();
    sqrs();
    return 0;
}

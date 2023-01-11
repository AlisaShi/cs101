#include <stdio.h>
int i = 4;
void uptri(){
    for(int n=0;n<i;n++){
        for(int k=0;k<n;k++){
            printf(" ");
        }
        for(int j=7;j>=n*2-1;j--){
            printf("*");
        }
        printf("\n");
    }
}
void downtri(){
    for(int n=0;n<i;n++){
        for (int k=0;k<4-n;k++){
            printf(" ");
        }
        for(int j=0;j<=n*2;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    uptri();
    downtri();
    return 0;
}

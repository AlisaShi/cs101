#include <stdio.h>

int main(){
    int i=15;
    int j=15;
    int x=0;

    for (int k=0;k<i/2+1;k++){
        if(j%2!=0){
            x=x+1;
        }
        j=j/2;
    }

    printf("%d",x);
    return 0;
}

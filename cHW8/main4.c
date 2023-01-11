#include <stdio.h>

int round_funtion(float f){
    return(f+0.5);
}


int main(){
    printf("四捨五入 %f = %d\n",1.4 ,round_funtion(1.4));
    printf("四捨五入 %f = %d\n",2.6 ,round_funtion(2.6));
    return 0;
}

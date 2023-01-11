#include <stdio.h>
void get_binary(int n){
    
    int arr[7];
    for (int k=7;k>=0;k--){
        if(n%2!=0){
            arr[k]=1;
        }
        else{
            arr[k]=0;
        }
        n=n/2;
        
    }
    for (int i=0;i<=3;i++){
        printf("%d",arr[i]);

    }
    printf(" ");
    
    
    for(int i=4;i<=7;i++){
        printf("%d",arr[i]);
    }
}

int main(){
    int n;
    printf("n=6 binary representation=");
    get_binary(6);
    printf("\n");
    printf("n=16 binary representation=");
    get_binary(16);
    printf("\n");
    printf("n=255 binary representation=");
    get_binary(255);
    printf("\n");
    return 0;
}

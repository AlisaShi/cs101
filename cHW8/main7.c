#include <stdio.h>

int main()
{
    int a = -999;
    int b = 999;
    int asum;
    int bsum;
    if (a<0){
        a=-a;
        asum=asum+a%10;
        a=a/10;
        asum=asum+a%10;
        a=a/10;
        asum=asum+a%10;
        a=a/10;
        asum=-asum;
    }
    else{
        asum=asum+a%10;
        a=a/10;
        asum=asum+a%10;
        a=a/10;
        asum=asum+a%10;
        a=a/10;
        
    }
    if (b<0){
        b=-b;
        bsum=bsum+b%10;
        b=b/10;
        bsum=bsum+b%10;
        b=b/10;
        bsum=bsum+b%10;
        b=b/10;
        bsum=-bsum;
    }
    else{
        bsum=bsum+b%10;
        b=b/10;
        bsum=bsum+b%10;
        b=b/10;
        bsum=bsum+b%10;
        b=b/10;
        
    }
    printf("a=%d\n",asum);
    printf("b=%d\n",bsum);
    return 0;
}

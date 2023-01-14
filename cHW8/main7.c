/**#include <stdio.h>

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
        }
    return 0;
}
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
}**/


#include <stdio.h>
int get_digit(int num) {
return num%10;
}
int maino {
int num = - 9990;
int sum = 0;
int negative = 0;
if (num < 0) {
negative = 1;
num = 0 - num;
}
do {
if (num < 10) {
if (negative) {
sum -= get_digit(num);
}
}
else {
sum += get_digit(num);
}
num /= 10;
} while (num>0);
printf("sum-%d\n", sum);
return 0;
}

#include<stdio.h>

int digit(int n){
  return n%10;
}
int main(){
  int n = 1234;
  int numb = 0;
  
  while (n!=0){
    numb = numb*10 + digit(n);
    n /= 10;
  }
  
  printf("sum = %d\n",numb);
  return 0;
}

#include <stdio.h>

void print_spc (int n){
  for (int i = 0; i < n; i++){
      printf (" ");
    }
}


void print_tri (int n){
  for (int i = 1; i <= n; i++){
    print_spc (7 - i);
    for (int j = 1; j <= i * 2 - 1; j++){
	    printf ("*");
	    }
    printf ("\n");
    }

}

void print_trunk (){
  int i = 0;
  while (i < 5){
    printf ("      ");
    printf ("*\n");
    i++;
    }
}

int main ()
{
  printf ("X'mas tree\n");
  print_tri (3);
  print_tri (5);
  print_tri (7);
  print_trunk ();
  return 0;
}

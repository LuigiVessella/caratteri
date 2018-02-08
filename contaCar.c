#include<stdio.h>

int main(){
  int c;
  int cont=0;

  printf("Scrivi qualcosa: ");

  while((c=getchar()) != '\n'){
    cont++;
  }

  printf("Hai inserito %d caratteri\n", cont);
    

  return 0;
}

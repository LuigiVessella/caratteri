#include<stdio.h>

int main(){
  int c;
  int cont=0;

  while((c=getchar()) != EOF){
    cont++;
  }

  printf("Ci sono %d caratteri\n", cont); 

  return 0;
}

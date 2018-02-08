#include<stdio.h>

int main(){
  int c;
  int cont=0;

  while(c!=EOF){
    if((c=getchar()) == '\n')cont++;
  }

  printf("Ho contato %d linee\n", cont);

  return 0;
}

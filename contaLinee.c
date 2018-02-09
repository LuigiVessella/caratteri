#include<stdio.h>

int main(){
  int c;
  int cont=0;

  while((c=getchar()) != EOF){
	  if(c=='\n') cont++;
  }

  printf("Ho contato %d linee\n", cont);

  return 0;
}

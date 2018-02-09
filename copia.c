#include<stdio.h>

int main(){
  int c;

  while (c != EOF){
	  c = getchar();
	  putchar(c);
  }
  putchar('\n');

  return 0;
}

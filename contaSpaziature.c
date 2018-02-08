#include<stdio.h>

int main(){
  int c;
  int spazi=0, tabu=0, newl=0;
  
  while(c!=EOF){
    if((c=getchar()) == '\n')newl++;
    else if((c=getchar()) == ' ')spazi++;
    else tabu++;
  }

  printf("Caratteri di tabulazione: %d\nSpazi: %d\nNewline: %d\n", tabu, spazi, newl);

  return 0;
}


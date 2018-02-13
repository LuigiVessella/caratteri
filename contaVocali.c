#include<stdio.h>

int main(){
	int c;
	int voc=0;

	while((c = getchar()) != EOF){
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') voc++;
	
		else;
	}
	printf("Ho contato %d vocali \n", voc);

return 0;
}

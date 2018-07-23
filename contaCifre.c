#include <stdio.h>

int main(){
	int c;
	int cif[10];
	int spaz = 0, car = 0;
	
	int i;

	for(i = 0; i < 10; i++){
		cif[i] = 0;
	}

	while( (c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			spaz++;
		}
		else if (c >= '0' || c<= '9'){
			cif[c-'0']++;
		}
		else{
			car++;
		}
	}

	printf("Cifre:\n");
	for( i = 0; i < 10; i++){
		printf("%d) %d\n", i, cif[i]);
	}

	printf("Spaziature: %d\n", spaz);
	printf("Restanti: %d\n", car);
	
return 0;
}

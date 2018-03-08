#include<stdio.h>
/*tabella degli stati
 * NORM > CARATTERE NORMALE \ STATO NORMALE
 * DOPPIO > SE INCONTRIAMO UNO SPAZIO
 * */
int main(){
	enum STATO { NORM, doppio };

	enum STATO stato = NORM;

	int c;

	while((c = getchar()) != EOF) {
		if(stato == NORM) {
			putchar(c);
			 if(c == ' '){
				stato = doppio;
			}
		} else if ( stato == doppio )
			if (c!= ' ') {
				putchar(c);
				stato = NORM;
			}
	}


return 0;
}

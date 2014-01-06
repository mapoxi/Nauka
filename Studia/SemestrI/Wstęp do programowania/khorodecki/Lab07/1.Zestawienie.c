#include <stdio.h>

int main(){

	int ujemne = 0;
	int zero = 0;
	int dodatnie = 0;
	int i = 0;
	float wejscie;
	
	printf("Wpisz 10 liczb do zestawienia: ");
	
	while (i <10){
		scanf("%f",&wejscie);
		i = i+1;
		if (wejscie < 0) ujemne = ujemne+1;
		else if (wejscie == 0) zero = zero+1;
		else dodatnie = dodatnie+1;
		}
	
	printf("\nUjemnych jest: %d\nZer jest: %d\nDodatnich jest: %d\n",ujemne,zero,dodatnie);
 
	return 0;
	}
#include <stdio.h>

int main(){

	float tab[100];
	int i = 0;
	float wejscie = 0;
	
	printf("Wpisz liczby to zestawienia: \n");
	
	while((int)wejscie != '\n'){
		scanf("%f",&wejscie);
		tab[i] = wejscie;
		i = i+1;
		}
 
	return 0;
	}
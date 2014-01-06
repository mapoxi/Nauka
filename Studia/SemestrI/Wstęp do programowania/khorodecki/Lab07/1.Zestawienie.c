#include <stdio.h>

int main(){

	float tab[100];
	int i = 0;
	int wejscie = 0;
	
	printf("Wpisz liczby to zestawienia:\n");
	
	while(wejscie != (int)'\n'){
		scanf(%f,&wejscie);
		tab[i] = wejscie;
		i = i+1;
		}
 
	return 0;
	}
#include <stdio.h>

int main(){

	char tablica[100];
	int i = 0;
	char litera = 'a';
	
	printf("Wpisz slowo, ktore chcesz sprawdzic. Zakoncz Enterem: ");
	
	while ((int)litera != 10){
		scanf("%c", &litera);
		if ((int)litera != 10) tablica[i] = litera;
		i = i+1;
		}
		
		



	return 0;
	}

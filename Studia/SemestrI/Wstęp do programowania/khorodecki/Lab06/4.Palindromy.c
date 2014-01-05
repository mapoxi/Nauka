#include <stdio.h>

int main(){

	char tablica[100];
	int i = 0;
	char litera = 'a';
	int pocz, kon;
	int warunek = 0;
	
	printf("Wpisz slowo, ktore chcesz sprawdzic. Zakoncz Enterem: ");
	
	while ((int)litera != 10){
		scanf("%c", &litera);
		if ((int)litera != 10){
			tablica[i] = litera;
			i = i+1;
			}
		}
	
	pocz = 0;
	kon = i;
	
	while (koniec <=0 && warunek == 0){
		if(tablica[pocz] != tablica[kon]) warunek = 1;
		pocz = pocz+1;
		kon = kon-1;
		}
		

	return 0;
	}

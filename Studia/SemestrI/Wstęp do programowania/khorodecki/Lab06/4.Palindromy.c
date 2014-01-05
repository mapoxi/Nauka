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
			}
		i = i+1;
		}
	
	i = i-1;
	pocz = 0;
	kon = i-1;
	
	while (kon >=0 && warunek == 0){
		if(tablica[pocz] != tablica[kon]) warunek = 1;
		printf("%c    %c\n",tablica[pocz],tablica[kon]);
		pocz = pocz+1;
		kon = kon-1;
		}
	
	printf("\nSlowo ");
	pocz = 0;
	while(pocz <= i){
		printf("%c",tablica[pocz]);
		pocz = pocz+1;
		}
	if (warunek == 1) printf(" nie");
	printf(" jest palindromem.\n");

	return 0;
	}

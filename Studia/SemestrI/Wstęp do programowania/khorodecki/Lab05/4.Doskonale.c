#include <stdio.h>
#include <math.h>

int main(){
	
	int licznik;
	int suma;
	int liczba = 3;
	int dzielna;
	
	printf("Program drukuje 4 pierwsze liczby doskonale.\nOto one:\n");
	
	while(licznik < 4){
		suma = 0;
		dzielna = liczba-1;
		while (dzielna>0){
			if(liczba%dzielna == 0) suma = suma+dzielna;
			dzielna = dzielna-1;	
			}

		if(liczba == suma){
			printf("%d %d\n",licznik,liczba);
			licznik = licznik+1;
			}
			
		liczba = liczba+1;
	}
	
return 0;
}
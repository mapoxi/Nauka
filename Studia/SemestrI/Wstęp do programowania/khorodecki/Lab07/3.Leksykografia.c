#include <stdio.h>

int main(){
	
	int tablica[2][10];
	int wynik = 10;
	int petla = 0;
	int i = 0;
	int j = 0;

	printf("Podaj 10 liczb pierwszego ci¹gu oraz po enterze 10 drugiego: );
	
	while (petla < 20)[
		if (petla == 10){
			i = 1;
			j = 0;
			}
		scanf("%d",tab[i][j]);
		petla = petla + 1;
		}
	
	j = 0;
	
	while (wynik == 10 && j < 10){
		if (tablica[0][j] > tablica[1][j]) wynik = 0;
		else if (tablica[0][j] < tablica[1][j]) wynik = 1;
		else j = j+1;
		}
	
	printf("\nLeksykograficznie wiejsza jest tablica: ");
	j = 0;
	
	while (j < 10){
		printf("%d ",tablica[wynik][j]);
		j = j+1;
		}
	
	printf("\n");
	
	return 0;
	}
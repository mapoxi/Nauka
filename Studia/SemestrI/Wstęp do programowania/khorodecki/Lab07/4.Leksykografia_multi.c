#include <stdio.h>

int main(){
	
	int tablica[4][5];
	int wynik = 0;
	int warunek = 0;
	int petla = 0;
	int i = 0;
	int j = 0;

	printf("Podaj 5 liczb do kazdego z 4 ciagow: ");
	
	while (petla < 20){
		if (petla%5 == 0 petla != 0){
			i = i+1;
			j = 0;
			}
		scanf("%d",&tablica[i][j]);
		petla = petla + 1;
		j = j+1;
		}
	
	i = 1;
	
	while (i < 4){
		j = 0;
        while (j < 5 && warunek == 0){
		    if (tablica[wynik][j] < tablica[i][j]){
				wynik = i;
				warunek = 1;
				}
		    j = j+1;
			}
		}
	
	printf("Leksykograficznie wieksza jest tablica: ");
	j = 0;
	
	while (j < 10){
		printf("%d ",tablica[wynik][j]);
		j = j+1;
		}
	
	printf("\n");
	
	return 0;
	}

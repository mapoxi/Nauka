#include <stdio.h>

int main(){
	
	int tablica[2][10];
	int i;
	
	printf("Podaj pierwsza 10 cyfrowa liczbe: ");
	for(i=0; i<10; i = i+1) tablica[0][i] = getchar()-48;
	getchar();
	printf("\nPodaj druga liczbe: ");
	for(i=0; i<10; i = i+1) tablica[1][i] = getchar()-48;

	for(i=9; i>=0; i = i-1) tablica[0][i] = tablica[0][i]+tablica[1][i];
	
	for(i=9; i>0; i = i-1)
		if(tablica[0][i]>=10){
			tablica[0][i] = tablica[0][i]-10;
			tablica[0][i-1] = tablica[0][i-1]+1;
			}
	
	if (tablica[0][0]>=10){
		tablica[0][0] = tablica[0][0]-10;
		printf("\n1");
		}
	for(i=0; i < 10; i = i+1) printf("%d",tablica[0][i]);
	printf("\n");

	return 0;
	}

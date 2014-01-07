#include <stdio.h>

int main(){
	
	int tablica[2][10];
	int a = 0;
	int i;
	
	printf("Podaj pierwsza 10 cyfrowa liczbe: ");
	for(i=0; i = i+1; i<10) tablica[0][i] = getchar();
	
	printf("\nPodaj druga liczbe: ");
	for(i=0; i = i+1; i<10) tablica[1][i] = getchar();
	
	for(i=9; i = i-1; i>=0) tablica[0][i] = tablica[0][i]+tablica[1];
	
	for(i=9; i = i-1; i>0)
		if(tablica[0][i]>=0){
			tablica[0][i] = tablica[0][i]-10;
			tablica[0][i-1] = tablica[0][i-1]+1;
			}
	
	if (tablica[0][0]>=10){
		tablica[0][0] = tablica[0][0]-10;
		printf("\n1");
		}
	for(i=1; i = i+1; i < 10) printf("%d",tablica[0][i]);
	printf("\n");

	return 0;
	}
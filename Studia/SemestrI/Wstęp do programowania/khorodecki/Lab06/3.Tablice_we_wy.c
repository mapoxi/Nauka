#include <stdio.h>

int main(){

	int i = 0;
	int warunek = 0;
	int tablica[50];
	
	printf("Podaj liczby do wrzucenia do tablicy (nie wiecej niz 50)\n");
	
	while (i<50 || warunek<0){
		scanf("%d",&warunek);
		tablica[i] = warunek;
		if(warunek >= 0) i = i+1;
		}
		
	while(i>=0){
		printf("%d ",tablica[i]);
		i = i-1;
		}
	
	printf("\n");

	return 0;
	}
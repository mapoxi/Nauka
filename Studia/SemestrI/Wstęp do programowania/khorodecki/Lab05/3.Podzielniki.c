#include <stdio.h>
#include <math.h>

int main(){

int wejscie;
int licznik = 0;
int zmienna;

printf("Program wypisuje liczbe podzielnikow. Podaj liczbe do sprawdzenia: ");
scanf("%d",&wejscie);
zmienna = wejscie;

while (zmienna > 0){
	if(wejscie%zmienna == 0) licznik = licznik + 1;
	zmienna = zmienna -1;
	}
	
printf("Liczba %d na %d dzielnikow :)\n",wejscie,licznik);

return 0;
}
#include <stdio.h>

int main(){
    
    int wejscie;
    int h = 0;
    int licznik = 0;
    int spacja;
	int wiersz = 1;
	int wykonane = 1;
    
    
    printf("Podaj z ilu liczb ma sie skladac trojkat: ");
    scanf("%d",&wejscie);
    
    while (licznik < wejscie){
          h = h+1;
          licznik = licznik + h;
          }
    
	licznik = 0;
	
    while (h>0){
          spacja = (h-1)*2;
          
        while (spacja>0){
                printf(" ");
                spacja = spacja-1;
                }
        while (licznik < wiersz || wykonane <=wejscie){
			printf("%4d",wykonane);
			licznik = licznik+1;
			wykonane = wykonane+1;
			}
		wiersz = wiersz+1;
		licznik = 0;
		spacja = (h-1)*2;
          
        while (spacja>0){
                printf(" ");
                spacja = spacja-1;
                }
		printf("\n");
		h = h-1;
          
          }
    
    
    
    return 0;
}

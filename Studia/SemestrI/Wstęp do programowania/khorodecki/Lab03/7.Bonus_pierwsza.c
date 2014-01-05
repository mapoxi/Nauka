#include <stdio.h>
#include <math.h>

int main(){
    
    int liczba;
    int licznik;
    int tester = 0;
    
    
    printf("Podaj liczbe, ktora chcesz sprawdzic: ");
    scanf("%d",&liczba);
    
    licznik = liczba;
    
    while (licznik>1){
          if(liczba%licznik == 0) tester = tester + 1;
          licznik = licznik-1;
          }
          
    if (tester == 1) printf("\nLiczba %d jest pierwsza\n",liczba);
    else printf("Liczba nie jest pierwsza\n");     
    
    return 0;
}

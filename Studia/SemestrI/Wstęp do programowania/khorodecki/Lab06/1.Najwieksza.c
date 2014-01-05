#include <stdio.h>

int main(){
    
    int a,b,c,najwieksza;
    
    printf("Podaj 3 cyfry do sprawdzenia: ");
    scanf("%d%d%d",&a,&b,&c);
    
    najwieksza = a;
    if(b>a) najwieksza = b;
    if(c>najwieksza) najwieksza = c;
    
    printf("\nNajwieksza liczba to: %d\n",najwieksza);  
    
    
    return 0;
}

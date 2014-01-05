#include <stdio.h>

int main(){
    
    int n;
    int h = 0;
    int licznik = 0;
    
    
    printf("Podaj z ilu liczb ma sie skladac trojkat: ");
    scanf("%d",&n);
    
    while (licznik < n){
          h = h+1;
          licznik = licznik + h;
          }
          
          printf("\n%d\n",h);
    
    
    
    return 0;
}

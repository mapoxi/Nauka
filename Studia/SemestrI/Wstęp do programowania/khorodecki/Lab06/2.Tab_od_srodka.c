#include <stdio.h>

int main(){
    
    int i = 3;
    /* omijam preambu³ê programu .. */

    int tab[8];
    
    tab[0] = 5;
    tab[1] = 5;
    tab[2] = 8;
    tab[3] = 7;
    tab[4] = 3;
    tab[5] = 3;
    tab[6] = 9;
    tab[7] = 11;
    
    /* .. oraz jego zakonczenie */
    
    while (i>=0){
          printf("%d ",tab[i]);
          i = i-1;
          }
    i = 4;
    
    while (i<=7){
          printf("%d ",tab[i]);
          i = i+1;
          }
    printf("\n");
    
    return 0;
}

#include <stdio.h>

int main(){
  
  int x,y; 
    
    
    printf("Podaj wspolrzedne x oraz y ze spacja posrodku\n");
    scanf("%d%d",&x,&y);
    
    if (x<0 && y>0 && (x+y<6) printf("Punkt ma kolor szary\n");
    else if (x>0 && y>0 && (x+y>6) printf("Punkt ma kolor szary\n");
    else if (x>0 && y<0 && (x+y<6) printf("Punkt ma kolor szary\n");
    else if (x == 0 || y == 0 || (x+y == 6) printf("Punkt jest na linii\n");
    else printf("Punkt ma kolor bialy\n");
    
    return 0;
}

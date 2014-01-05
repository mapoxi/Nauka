#include <stdio.h>

int main(){
 int a,h,i;
 
 printf("Program rysuje rownoleglobok, podaj jego dlugosc i wysokosc: ");
 scanf("%d%d",&a,&h);
 
 while (h>0){
       i = 1;
       while(i<h){
                  printf(" ");
                  i = i+1;
                  }
       i = 0;
                  
       while (i<a){
                   printf("*");
                   i = i+1;
                   }
     printf("\n"); 
    
    
    }
    
    return 0;
}

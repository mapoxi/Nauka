#include <stdio.h>

int main(){

float a,b,c,delta;

printf("Podaj dane do wyliczenia delty. Oddziel je spacjami\n");
scanf("%f%f%f",&a,&b,&c);

delta = b*b-(4*a*c);

printf("Delta to: %f\n", delta);

return 0;
}

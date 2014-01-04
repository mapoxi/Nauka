/*


* Poni¿szy program wypisuje 10 razy 


* "Kazdy programista umie zorganizowac pêtlê while"


*/


#include <stdio.h> 

 /*wywolanie biblioteki*/



int main()


{


int licz_przeb; /* deklaracja zmiennej licz_przeb */





licz_przeb = 75; /* najpierw liczba przebiegów petli while jest zero*/



     while (licz_przeb < 85){ /*dopóki licznik nie przekroczy wartoœci 10, wykonaj*/


           printf("Kazdy programista umie zorganizowac petle while");


           licz_przeb = licz_przeb + 1; /*zwiekszamy licznik przebiegow petli*/


}
return 0;


}
/*


* Poni�szy program wypisuje 10 razy 


* "Kazdy programista umie zorganizowac p�tl� while"


*/


#include <stdio.h> 

 /*wywolanie biblioteki*/



int main()


{


int licz_przeb; /* deklaracja zmiennej licz_przeb */





licz_przeb = 75; /* najpierw liczba przebieg�w petli while jest zero*/



     while (licz_przeb < 85){ /*dop�ki licznik nie przekroczy warto�ci 10, wykonaj*/


           printf("Kazdy programista umie zorganizowac petle while");


           licz_przeb = licz_przeb + 1; /*zwiekszamy licznik przebiegow petli*/


}
return 0;


}
/*


* Ponizszy program wypisuje


* Program powo�uje zmienn� liczba typu ca�kowitego (tj. int)


* przypisuje jej warto�� liczby 5 oraz wypisuje warto�� zmiennej


* liczba na ekranie. tekst kt�ry teraz czytasz, jest zakomentowany


* i nie bedzie interpretowany jako kod programu. Jest to tzw.


* komentarz blokowy w odr�nieniu od komentarza w jednej linii


* kt�ry uzyskuje si� przez wpisanie dw�krotnie znaku slash.


* dalsze informacje dotycz�ce komentowania otrzymasz w zad. 5.


*/


#include <stdio.h> 

 /*wywolanie biblioteki*/



int main()


{


int inna_zmienna; /* deklaracja zmiennej inna_zmienna czyli nazwa typu zmiennej oraz jej nazwa*/





inna_zmienna = 5; /* nadanie zmiennej inna_zmienna warto�ci 5 */


     printf("To jest pierwszy program\n");


     printf("wypisujacy liczby.\n");


     printf("oto ona: %d\n",inna_zmienna);

return 0;
}
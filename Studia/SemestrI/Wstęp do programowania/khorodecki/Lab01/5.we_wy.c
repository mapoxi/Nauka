/*


* Ponizszy program wypisuje


* Program powo³uje zmienn¹ liczba typu ca³kowitego (tj. int)


* przypisuje jej wartoœæ liczby 5 oraz wypisuje wartoœæ zmiennej


* liczba na ekranie. tekst który teraz czytasz, jest zakomentowany


* i nie bedzie interpretowany jako kod programu. Jest to tzw.


* komentarz blokowy w odró¿nieniu od komentarza w jednej linii


* który uzyskuje siê przez wpisanie dwókrotnie znaku slash.


* dalsze informacje dotycz¹ce komentowania otrzymasz w zad. 5.


*/


#include <stdio.h> 

 /*wywolanie biblioteki*/



void main()


{


int liczba; /* deklaracja zmiennej liczba czyli nazwa typu zmiennej oraz jej nazwa*/





liczba = 5; /* nadanie zmiennej liczba wartoœci 5 */


     printf("To jest pierwszy program\n");


     printf("wypisujacy liczby.\n");


     printf("oto ona: %d",liczba);


}
#include <stdio.h> 

 /*wywo�anie biblioteki*/


int main()

/*glowna funkcja programu */
{


int litera; /* deklaracja zmiennej litera czyli nazwa typu zmiennej oraz jej nazwa*/
int litera2;






     printf("To jest pierwszy program\n");


     printf("wczytuj�cy i wypisuj�cy 2 litery.\n");


     printf("podaj 2 litery wciskaj�c enter po pierwszej z nich.\n");





scanf("%c%c",&litera,&litera2);


/*


* zwroc uwage na znak ampersant w wywolaniu funkcji scanf 


* jest on niezbedny, gdyz funkcja scanf MODYFIKUJE warto�� 


* zmiennej litera. W tym celu musi mie� do niej dost�p


* i uzyskuje go przez ampersant. Dla odr�nienia: funkcja


* printf nie modyfikuje warto�ci zmiennych wi�c nie 


* trzeba wpisywa� (i nie ma sensu ) ampersanta przed nazw�


* zmiennej


*/





     printf("wypisuje litere ktora podales/las:");


     printf("oto pierwsza: %c a to druga: %c",litera,litera2);

return 0;
}
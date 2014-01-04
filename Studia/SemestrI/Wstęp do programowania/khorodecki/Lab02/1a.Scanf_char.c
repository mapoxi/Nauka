#include <stdio.h> 

 /*wywo³anie biblioteki*/


int main()

/*glowna funkcja programu */
{


char litera; /* deklaracja zmiennej litera czyli nazwa typu zmiennej oraz jej nazwa*/
char litera2;
char enter;






     printf("To jest pierwszy program\n");


     printf("wczytujacy i wypisujacy 2 litery.\n");


     printf("podaj 2 litery wciskajac enter po pierwszej z nich.\n");





scanf("%c%c%c",&litera,&enter,&litera2);


/*


* zwroc uwage na znak ampersant w wywolaniu funkcji scanf 


* jest on niezbedny, gdyz funkcja scanf MODYFIKUJE wartoœæ 


* zmiennej litera. W tym celu musi mieæ do niej dostêp


* i uzyskuje go przez ampersant. Dla odró¿nienia: funkcja


* printf nie modyfikuje wartoœci zmiennych wiêc nie 


* trzeba wpisywaæ (i nie ma sensu ) ampersanta przed nazw¹


* zmiennej


*/





     printf("wypisuje litere ktora podales/las:");


     printf("oto pierwsza: %c a to druga: %c\n",litera,litera2);

return 0;
}
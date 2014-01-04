#include <stdio.h> 

 /*wywo³anie biblioteki*/


int main()

/*glowna funkcja programu */
{


int litera; /* deklaracja zmiennej litera czyli nazwa typu zmiennej oraz jej nazwa*/
int litera2;






     printf("To jest pierwszy program\n");


     printf("wczytuj¹cy i wypisuj¹cy 2 litery.\n");


     printf("podaj 2 litery wciskaj¹c enter po pierwszej z nich.\n");





scanf("%c%c",&litera,&litera2);


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


     printf("oto pierwsza: %c a to druga: %c",litera,litera2);

return 0;
}
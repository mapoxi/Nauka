#include <stdio.h> 

 /*wywo³anie biblioteki*/


int main()

/*glowna funkcja programu */
{


int liczba; /* deklaracja zmiennej liczbai czyli nazwa typu zmiennej oraz jej nazwa*/
int liczba2;






     printf("To jest pierwszy program\n");


     printf("wczytujacy i wypisujacy 2 liczby.\n");


     printf("podaj 2 liczby wciskajac enter po pierwszej z nich.\n");





scanf("%d%d",&liczba,&liczba2);


/*


* zwroc uwage na znak ampersant w wywolaniu funkcji scanf 


* jest on niezbedny, gdyz funkcja scanf MODYFIKUJE wartoœæ 


* zmiennej liczba. W tym celu musi mieæ do niej dostêp


* i uzyskuje go przez ampersant. Dla odró¿nienia: funkcja


* printf nie modyfikuje wartoœci zmiennych wiêc nie 


* trzeba wpisywaæ (i nie ma sensu ) ampersanta przed nazw¹


* zmiennej


*/





     printf("wypisuje liczbe ktora podales/las:");


     printf("oto pierwsza: %d a to druga: %d\n",liczba,liczba2);

return 0;
}
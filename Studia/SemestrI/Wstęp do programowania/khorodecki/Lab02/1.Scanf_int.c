#include <stdio.h> 

 /*wywo�anie biblioteki*/


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


* jest on niezbedny, gdyz funkcja scanf MODYFIKUJE warto�� 


* zmiennej liczba. W tym celu musi mie� do niej dost�p


* i uzyskuje go przez ampersant. Dla odr�nienia: funkcja


* printf nie modyfikuje warto�ci zmiennych wi�c nie 


* trzeba wpisywa� (i nie ma sensu ) ampersanta przed nazw�


* zmiennej


*/





     printf("wypisuje liczbe ktora podales/las:");


     printf("oto pierwsza: %d a to druga: %d\n",liczba,liczba2);

return 0;
}
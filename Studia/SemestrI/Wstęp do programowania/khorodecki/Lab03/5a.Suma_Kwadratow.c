/*


* Poni�szy program oblicza sum� i warto�� �redni� 300 kolejnych liczb

 
* naturalnych

 
*/

 #include <stdio.h> 

 
 int main()

 
 {

 
 float suma; /* zmienna do sumowania liczb */

 
 int licznik; /* zmienna do zapamietywania liczby liczb*/ 

 
 float srednia; /* zmienna do zapisania wartosci sredniej z liczb */ 

  float liczba; /* przechowuje wartosc kolejnej liczby */

 

  suma = 0; 

 
  licznik = 0; 

 
  liczba = 0;


  while (licznik < 50){ 

 
    suma = suma + liczba*liczba; /* sumujemy liczby */

 
    liczba = liczba + 1; /* zwiekszamy liczbe */

 
    licznik = licznik + 1; /* zwiekszamy licznik liczb */

 
 }

 

 srednia = suma/licznik; 

 
printf("oto suma liczb %f\n",suma);

 
printf("a to ich wartosc srednia %f\n",srednia);

 

return 0;

 
}

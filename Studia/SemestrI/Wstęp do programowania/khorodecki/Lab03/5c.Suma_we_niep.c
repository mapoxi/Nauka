/*


* Poni¿szy program oblicza sumê i wartoœæ œredni¹ 300 kolejnych liczb

 
* naturalnych

 
*/

 #include <stdio.h>
 #include <math.h>

 
 int main()

 
 {

 
 float suma; /* zmienna do sumowania liczb */

 
 int licznik; /* zmienna do zapamietywania liczby liczb*/ 

 
 float srednia; /* zmienna do zapisania wartosci sredniej z liczb */ 
 int liczba; /* przechowuje wartosc kolejnej liczby */
 int zmienna;
 int dzielna = 0;
 printf("Podaj wartosc graniczna: ");
 scanf("%d",&zmienna);
 

  suma = 0; 

 
  licznik = 0; 

 
  liczba = 0;


  while (licznik < zmienna){ 

 
    if (liczba%2 != 0) {suma = suma + liczba; /* sumujemy liczby */
						dzielna = dzielna +1;
						}

 
    liczba = liczba + 1; /* zwiekszamy liczbe */

 
    licznik = licznik + 1; /* zwiekszamy licznik liczb */

 
 }

 

 srednia = suma/dzielna; 

 
printf("\noto suma liczb %f\n",suma);

 
printf("a to ich wartosc srednia %f\n",srednia);

 

return 0;

 
}

 #include <stdio.h> 

 int main()

 {


 float x,y; /* deklaracja zmiennej i czyli nazwa typu zmiennej oraz jej nazwa*/


  x = 6.5;   /*przypisanie, inaczej nadanie wartosci 6 zmiennej x */
  printf("poczatkowa wartosc x: %f\n",x);
   x = x + 1;  /* zwiekszenie, inaczej inkrementacja (o 1) zmiennej x */
  printf("po inkrementacji o 1: %f\n",x);
  x = 2*x; /*mnozenie przez 2 */
  printf("po pomnożeniu przez 2: %f\n",x);
  x = x/3;
  printf("po podzieleniu przez 3: %f\n",x);

  printf("Teraz y :)\n");
  y = 17;
  printf("Poczatkowa wartosc: %f\n",y);
  y = y-2;
  printf("Zmniejszenie o 2: %f\n",y);
  y = y/3;
  printf("Dzielenie przez 3: %f\n",y);
  y = y+1;
  printf("Zwiekszenie o 1: %f\n",y);
return 0;
}

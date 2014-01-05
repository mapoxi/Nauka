#include <stdio.h>
#include <math.h>

int main(){

	int suma = 0;
	int i = 21;
	int licznik = 0;
	
	while (licznik < 50){
		i = i+7;
		printf ("%d ",i);
		licznik = licznik+1;
		suma = suma + i;
		}
	printf("\n%d modulo 7 = %d, wiec wszystko jest ok :)\n",suma,suma%7);
	


return 0;
}

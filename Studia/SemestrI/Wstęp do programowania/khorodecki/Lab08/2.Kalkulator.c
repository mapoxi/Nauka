#include <stdio.h>

int tablica[3][100];

void czysc(){
	int i = 0;
	int j = 0;
	
	for(i=0; i<3; i=i+1)
		for(j=0; j<100; j=j+1)
			tablica[i][j] = 0;
}

int main(){
	
	char wejscie;
	int i = 10;
	
	while(i != 5){
		czysc();
		printf("wybierz dzialanie:\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Exit\n");
		scanf("%d",&i);
		printf("Wybrano: %d\n",i);
	}
	getchar();
	scanf("%c",&wejscie);
	printf("%d\n",wejscie);


return 0;
}
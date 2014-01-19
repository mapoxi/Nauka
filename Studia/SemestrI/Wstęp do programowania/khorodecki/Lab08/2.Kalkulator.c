#include <stdio.h>

int tablica[3][100];


/*Czysci tablice przed zapisaniem do niej danych*/
void czysc(){
	int i = 0;
	int j = 0;
	
	for(i=0; i<3; i=i+1)
		for(j=0; j<100; j=j+1)
			tablica[i][j] = 0;
}

/*Menu programu*/
void menu(int i){
	if (i == 1) dodawanie();



}

/*Funkcja dodawania*/
void dodawanie(){
	printf("Wybrano dodawanie dwoch duzych liczb.\n");
}

int main(){
	
	int i = 0;
	
	while(i != 5){
		czysc();
		printf("wybierz dzialanie:\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Exit\n");
		scanf("%d",&i);
		menu(i);
	}



return 0;
}
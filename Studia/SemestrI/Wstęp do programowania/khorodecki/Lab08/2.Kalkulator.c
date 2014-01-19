#include <stdio.h>

int tablica[3][100];
int znak;
int dlugosc;

/*Czysci tablice przed zapisaniem do niej danych*/
void czysc(){
	int i = 0;
	int j = 0;
	
	for(i=0; i<3; i=i+1)
		for(j=0; j<100; j=j+1)
			tablica[i][j] = 0;
}

/*Wczytywanie duzych liczb*/
void wejscie(int liczba){

	char cyfra;
	znak = 0;
	dlugosc = 0;

	if(liczba == 1) printf("Podaj pierwsza liczbe: ");
	else printf("Podaj druga liczbe: \n");
	
	scanf("%c",&cyfra);
	printf("%d\n",cyfra);
}

/*Funkcja dodawania*/
void dodawanie(){	
	printf("Wybrano dodawanie dwoch duzych liczb.%d\n");
	wejscie(1);
}

/*Menu programu*/
void menu(int wybor_menu){
	if (wybor_menu == 1) dodawanie();



}

int main(){
	
	int sterownik = 0;
	while(sterownik != 5){
		czysc();
		printf("wybierz dzialanie:\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Exit\n");
		scanf("%d",&sterownik);
		menu(sterownik);
	}



return 0;
}
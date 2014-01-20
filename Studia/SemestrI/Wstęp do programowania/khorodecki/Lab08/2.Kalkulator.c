#include <stdio.h>

int tablica[3][100];
int znak[2];
int dlugosc[2];

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
	int licznik = 0;

	if(liczba == 0) printf("Podaj pierwsza liczbe: ");
	else printf("Podaj druga liczbe: ");
	
	scanf("%c",&cyfra);
	if (cyfra == '-'){
		znak[liczba] = -1;
		cyfra = '0';
	}
	else {
		znak[liczba] = 1;
		tablica[liczba][0] = cyfra-48;
		licznik = 1;
	}
	
	while ((cyfra-48)>=0 && (cyfra-48)<=9){
		scanf("%c",&cyfra);
		if ((cyfra-48)>=0 && (cyfra-48)<=9){
			tablica[liczba][licznik] = cyfra-48;
			licznik += 1;
		}
	}
	
	dlugosc[liczba] = licznik;
	
}

/*Funkcja dodawania*/
void dodawanie(){	
	printf("Wybrano dodawanie dwoch duzych liczb.\n\n");
	getchar();
	wejscie(0);
	wejscie(1);
}

/*Menu programu*/
void menu(int wybor_menu){
	czysc();
	znak[0] = 0;
	znak[1] = 0;
	dlugosc[0] = 0;
	dlugosc[1] = 1;
	
	if (wybor_menu == 1) dodawanie();



}

int main(){
	
	int sterownik = 0;
	while(sterownik != 5){
		printf("\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Exit\nWybierz dzialanie: ");
		scanf("%d",&sterownik);
		if(sterownik != 5) menu(sterownik);
	}



return 0;
}
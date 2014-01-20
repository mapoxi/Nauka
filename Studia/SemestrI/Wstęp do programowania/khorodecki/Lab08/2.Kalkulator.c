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
	
	//getchar();
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
	wejscie(0);
	wejscie(1);
	printf("%d%d%d%d%d\n",tablica[0][0],tablica[0][1],tablica[0][2],tablica[0][3],tablica[0][4]);
	printf("Znak: %d, dlugosc: %d\n",znak[0], dlugosc[0]);
	printf("%d%d%d%d%d\n",tablica[1][0],tablica[1][1],tablica[1][2],tablica[1][3],tablica[1][4]);
	printf("Znak: %d, dlugosc: %d\n",znak[1], dlugosc[1]);
	getchar();
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
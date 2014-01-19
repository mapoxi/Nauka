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
	else printf("Podaj druga liczbe: ");
	
	getchar();
	scanf("%c",&cyfra);
	if (cyfra == '-') znak = -1;
	else {
		tablica[liczba][0] = cyfra-48;
		printf("\n%d",tablica[0][0]);
	}
}

/*Funkcja dodawania*/
void dodawanie(){	
	printf("Wybrano dodawanie dwoch duzych liczb.\n");
	wejscie(0);
}

/*Menu programu*/
void menu(int wybor_menu){
	czysc();
	if (wybor_menu == 1) dodawanie();



}

int main(){
	
	int sterownik = 0;
	while(sterownik != 5){
		printf("wybierz dzialanie:\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Exit\n");
		scanf("%d",&sterownik);
		if(sterownik != 5) menu(sterownik);
	}



return 0;
}
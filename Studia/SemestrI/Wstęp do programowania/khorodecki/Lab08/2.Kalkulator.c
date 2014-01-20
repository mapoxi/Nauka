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

	char cyfra = '0';
	int licznik = 0;

	if(liczba == 0) printf("Podaj pierwsza liczbe: ");
	else printf("Podaj druga liczbe: ");
	
	while ((cyfra-48)>=0 && (cyfra-48)<=9){
		scanf("%c",&cyfra);
		if ((cyfra-48)>=0 && (cyfra-48)<=9){
			tablica[liczba][licznik] = cyfra-48;
			licznik += 1;
		}
	}
	
	dlugosc[liczba] = licznik-1;
	
}

/*Funkcja dodawania*/
void dodawanie(){	
	int suma,dlugosca,dlugoscb;
	
	printf("Wybrano dodawanie dwoch duzych nieujemnych liczb.\n\n");
	getchar();
	wejscie(0);
	wejscie(1);
	
	printf("Suma to: ");
	
	dlugosca = dlugosc[0];
	dlugoscb = dlugosc[1];
	
	if (dlugosca>dlugoscb) suma = dlugosca;
	else suma = dlugoscb;
	
	while(dlugosca >=0 && dlugoscb >=0){
		tablica[2][suma] += tablica[0][dlugosca] + tablica[1][dlugoscb];
		if (suma == 0 && tablica[2][suma] > 9){
			tablica[2][suma] -= 10;
			printf("1");
		}
		else if (tablica[2][suma] > 9){
			tablica[2][suma] -= 10;
			tablica[2][suma-1] += 1;
		}
		dlugosca -= 1;
		dlugoscb -= 1;
		suma -= 1;
	}
	
	if (dlugosca >= 0){
		dlugoscb = dlugosca;
		dlugosca = 0;
	}
	else dlugosca = 1;
	
	while (suma >= 0){
		tablica[2][suma] += tablica[dlugosca][dlugoscb];
		if (suma == 0 && tablica[2][suma] > 9){
			tablica[2][suma] -= 10;
			printf("1");
		}
		else if (tablica[2][suma] > 9){
			tablica[2][suma] -= 10;
			tablica[2][suma-1] += 1;
		}
		dlugoscb -= 1;
		suma -= 1;
	}
	
	if (dlugosc[0]>dlugosc[1]) suma = dlugosc[0];
	else suma = dlugosc[1];
	
	for (dlugoscb = 0; dlugoscb <= suma; dlugoscb += 1) printf("%d",tablica[2][dlugoscb]);
	printf("\nNacisnij enter, aby kontynuowac...");
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
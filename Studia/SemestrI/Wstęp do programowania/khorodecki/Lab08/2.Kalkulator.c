#include <stdio.h>

int main(){
	
	int i = 10;
	
	while(i != 5){
		printf("wybierz dzialanie:\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Exit\n");
		scanf("%d",&i);
		printf("Wybrano: %d\n",i);
	}


return 0;
}
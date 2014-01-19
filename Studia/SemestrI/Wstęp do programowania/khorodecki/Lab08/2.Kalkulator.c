#include <stdio.h>

int main(){
	
	int i = 10;
	
	while(i != 0){
		printf("wybierz dzialanie:\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Exit\n");
		scanf("%d",&i);
		printf("Wybrano: %d",i);
	}


return 0;
}
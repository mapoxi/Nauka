#include <stdio.h>

int main(){

	int a[10];
	int b[10];
	int i=0;
	
	printf("Podaj 10 liczb do tablicy a: ");
	
	while (i < 10){
		scanf("%d",&a[i]);
		i = i+1;
		}
		
	printf("Podaj 10 liczb do tablicy b: ");
	
	i = 0;
	while (i < 10){
		scanf("%d",&b[i]);
		i = i+1;
		}
	
	i = 0;
	while (i < 10){
		a[i] = a[i]*b[i];
		i = i+1;
		}
	
	printf("\nIloczyn skalarny to:\n");
	
	i = 0;
	while (i < 10){
		printf("%d. %d\n",i+1,a[i]);
		i = i+1;
		}
		
	return 0;
	}

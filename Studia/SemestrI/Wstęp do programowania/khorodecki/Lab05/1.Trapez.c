#include <stdio.h>

int main(){

int a,h;
int petla = 0;
int i = 0;

printf("Program rysuje trapez prostokatny. Podaj wysokosc oraz dlugosc gornej podstawy:\n");
scanf("%d%d",&h,&a);
printf("\n");

while(petla < h){
	while(i < a){
		printf("*");
		i = i + 1;
		}
	printf("\n");
	i = 0;
	a = a+1;
	petla = petla+1;
	}
return 0;
}
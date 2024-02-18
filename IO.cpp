#include<stdio.h>
int main(){
	int angkaBulat;
	float angkaKoma;
	char karakter;
	char string[100];
	
	printf("Masukan Bilangan Bulat :");
	scanf("%d", &angkaBulat);
	getchar();
	printf("%d\n", angkaBulat);
	
	printf("Masukan Bilangan Desimal :");
	scanf("%f", &angkaKoma);
	getchar();
	printf("%.2f\n", angkaKoma);
	
	printf("Masukan Karkter :");
	scanf("%c", &karakter);
	getchar();
	printf("%c\n", karakter);
	
	printf("Masukan Nama :");
	scanf("%[^\n]", string);
	getchar();
	printf("%s\n", string);
	return 0;
}

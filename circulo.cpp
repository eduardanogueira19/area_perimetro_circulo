#include<stdio.h>

#define PI 3.14

//�rea e do per�metro de um c�rculo.
int main()
{
	float area, perimetro, raio; 
	
	printf("Insira o valor do raio:\n");
	scanf("%f", &raio);
	
	perimetro = 2 * PI * raio;
	area =  PI * pow(raio, 2);
	printf("Perimetro: %.2f\n", perimetro);
	printf("Area: %.2f\n", area);
}

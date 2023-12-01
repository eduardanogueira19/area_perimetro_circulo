#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.14


int main()
{
	float area, perimetro, raio; 
	
	printf("Insira o raio do circulo: \n");
	scanf("%f", &raio);
	
	perimetro = 2 * PI * raio;
	area =  PI * pow(raio, 2);
	printf("Perimetro %.2f \n", perimetro);
	printf("Area %.2f \n", area);
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int base, altura, result, opc;
	
	printf("Por favor ingrese el n�mero de la operaci�n deseada:\n");
	printf("1. Calcular Per�metro de un Rect�ngulo\n");
	printf("2. Calcular Superficie de un Rect�ngulo\n");
	printf("3. Calcular Superficie de un Tri�ngulo\n");
	scanf("%d", &opc);
	
	printf("Ingrese la Base: ");
	scanf("%d", &base);
	printf("Ingrese la Altura: ");
	scanf("%d", &altura);
	
	switch(opc){
		case 1:
			result=(base+altura)*2;
			printf("El Per�metro del Rect�ngulo es: %d", result);
		break;
		case 2:
			result=base*altura;
			printf("La Superficie del Rect�ngulo es: %d", result);
		break;
		case 3:
			result=(base*altura)/2;
			printf("La Superficie del Tri�ngulo es: %d", result);
		break;
	}

}


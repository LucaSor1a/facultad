#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, base, altura, perim;
	
	printf("Por favor ingrese la Base del Rect�ngulo: ");
	scanf("%d", &base);
	printf("Por favor ingrese la Altura del Rect�ngulo: ");
	scanf("%d", &altura);
	
	perim=(base+altura)*2;
	
	for(i=0;i<=perim;i++){
		printf("%d, ", i);
	}

}


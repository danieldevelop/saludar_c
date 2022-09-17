#include <stdio.h>
#include <conio.h> // a la espera que se presione una tecla (use getche())

int main() {
	char nombre[100];
	
	printf("Ingrese su nombre: ");
	scanf("%[^\n]", &nombre);
	
	printf("\nHola Sr(a) %s, te saludo desde el lenguaje C gusto de conocerte", nombre);
	
	getche(); // espara hasta que el usuario presione cualquier tecla para terminar la ejecucion del programa
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 240, tam;
	int *punt;
	punt = &num;

	printf("Contenido del puntero: %d\n", *punt); //(1)
	printf("Direccion de memoria alamacenada por el puntero: %p\n", *punt); //(2)
	printf("Direccion de memoria de la variable: %p\n", num); //(3)
	/*El resultado de (2) y (3) es el mismo ya que la variable numero se guarda en una posicion de memoria
	 y la variable puntero apunta a esa posicion*/
	printf("Direccion de memoria del puntero: %p\n", punt); //(4)
	/*El resultado de (4) no es el mismo de (2) y (3) por que me muestra la posicion de memoria del puntero
	 y no de la variable a la que apunta*/
	tam = sizeof(num);
	printf("Tamanio utilizado por la variable: %d\n", tam); //(5)

	return 0;
}

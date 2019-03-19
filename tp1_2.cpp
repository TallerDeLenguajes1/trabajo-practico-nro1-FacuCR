#include <stdio.h>
#include <stdlib.h>

int Cuadrado(int x);// i)
void Cuadrado2(int x);// ii)
void DatosVar(int dat);// iii)
void Invertir(int *a, int *b);// iv)
void Ordenar(int *c, int *d);// v)

int main(void)
{
	int num, resul, var, val1, val2, pri, seg;
	printf("Ingresar un numero: ");
	scanf("%d", &num);
	resul = Cuadrado(num);
	printf("\nEl cuadrado del numero ingresado es: %d\n", resul);// i)
	printf("\n----------------------------------------\n");
	Cuadrado2(num);// ii)
	printf("\n----------------------------------------\n");
	printf("Ingrese un numero: ");
	scanf("%d", &var);
	DatosVar(var);// iii)
	printf("\n----------------------------------------\n");
	printf("Ingrese dos numeros: ");
	scanf("%d", &val1);
	printf("\n");
	scanf("%d", &val2);
	printf("\nValor 1: %d\nValor 2: %d", val1, val2);
	printf("\n\nInvertidos:\n");
	Invertir(&val1, &val2);
	printf("\nValor 1: %d\nValor 2: %d", val1, val2);// iv)
	printf("\n----------------------------------------\n");
	printf("Ingrese dos valores: ");
	scanf("%d", &pri);
	printf("\n");
	scanf("%d", &seg);
	Ordenar(&pri, &seg);
	printf("\nValor Menor: %d\nValor Mayor: %d\n", pri, seg);// v)


	return 0;
}

int Cuadrado(int x){ // i)
	return(x * x);
}

void Cuadrado2(int x){ // ii)
	int val = x * x;
	printf("\nEl cuadrado del numero ingresado es: %d\n", val);
}

void DatosVar(int dat){ // iii)
	printf("\nContenido: %d\n", dat);
	printf("\nDireccion de memoria del dato ingresado: %p\n", &dat);
}

void Invertir(int *a, int *b){ // iv)
	int aux = *a;
	*a = *b;
	*b = aux;
}

void Ordenar(int *c, int *d){ // v)
	int aux;
	if (d < c){
		aux = *c;
		*c = *d;
		*d = aux;
	}
}
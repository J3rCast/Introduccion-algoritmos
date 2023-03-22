#include "main.h"
/**
 * exercise_5 - Determines wich number is greater.
 */
void exercise_5()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("\nIngrese tres numeros:\n\n");
	printf("Cantidad a: ");
	scanf("%d", &a);
	printf("\nCantidad b: ");
	scanf("%d", &b);
	printf("\nCantidad c: ");
	scanf("%d", &c);

	if (a >= b && a >= c)
		printf("\nEl número mayor es: %d\n\n", a);
	else if (b >= a && b >= c)
		printf("\nEl número mayor es: %d\n\n", b);
	else if (c >= a && c >= b)
		printf("\nEl número mayor es: %d\n\n", c);
}
/**
 * exercise_6 - Determines the cost of a feast.
 */
void exercise_6()
{
	int amount = 0;

	while (1)
	{
		printf("\nIngrese el número de personas que asistiran al evento: ");
		scanf("%d", &amount);

		if (amount < 0)
		{
			printf("\nIngrese un valor valido.\n");
			amount = 0;
			continue;
		}
		if (amount <= 200)
		{
			printf("\nEl valor de cada platillo es de $9500 y el costo total será de: $%d\n\n", amount * 9500);
			return;
		}
		else if (amount <= 300)
		{
			printf("\nEl valor de cada platillo es de $8500 y el costo total será de: $%d\n\n", amount * 8500);
			return;
		}
		else
		{
			printf("\nEl valor de cada platillo es de $7500 y el costo total será de: $%d\n\n", amount * 7500);
			return;
		}
	}
}
/**
 * exercise_7 - Determines the revenue of a grape seller.
 */
void exercise_7()
{
	int initial_price = 0;
	int size = 0;
	int final_price = 0;
	char type = '\0';
	
	printf("\nIngrese el precio inicial: ");
	scanf("%d", &initial_price);

	while ((type != 'A' && type != 'B') || type == '\0')
	{
		printf("\nIngrese el tipo(A o B): ");
		scanf(" %c", &type);

		if ((type != 'A' && type != 'B') || type == '\0')
			printf("\nIngrese un tipo válido(A o B)\n");
		else
			break;
	}

	while ((size != 1 && size != 2) || size == 0)
	{
		printf("\nIngrese el tamaño(1 o 2): ");
		scanf("%d", &size);

		if ((size != 1 && size != 2) || size == 0)
			printf("\nIngrese un tamaño válido(1 o 2)\n");
		else
			break;
	}

	if (type == 'A' && size == 1)
		final_price = initial_price + 200;
	else if (type == 'A' && size == 2)
		final_price = initial_price + 300;
	else if (type == 'B' && size == 1)
		final_price = initial_price - 300;
	else if (type == 'B' && size == 2)
		final_price = initial_price - 500;

	printf("\nLa ganancia total es de: %d\n\n", final_price);

}
/**
 * main - Multiple exercises related to conditionals.
 *
 * Return: 0 on exit.
 */
int main()
{
	int exercise = 0;
	int available[] = {5, 6, 7, 8};
	

	while (exercise != 8)
	{
		printf("A continuación seleccione el ejercicio que desea evaluar:\n");
		printf("5: Ejercicio 5\n");
		printf("6: Ejercicio 6\n");
		printf("7: Ejercicio 7\n");
		printf("8: Salir\n");

		printf("Seleccione: ");
		scanf("%d", &exercise);

		if (in_array(available, exercise, 4) == 0)
			printf("\nIngrese un valor valido\n\n");
		else if (exercise == 5)
			exercise_5();
		else if (exercise == 6)
			exercise_6();
		else if (exercise == 7)
			exercise_7();
	}

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins for change
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int coin, i, cent, value;
	int money[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent <= 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		value = cent / money[i];
		cent -= value * money[i];
		coin += value;
		if (cent == 0)
			break;
	}
	printf("%d\n", coin);
	return (0);
}

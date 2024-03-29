#include "3-calc.h"

/**
 * main - calcult the number for op
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int a;
	char op;
	int b;
	int result;
	int (*f)(int, int);

	if (argc == 4)
	{
		a = atoi(argv[1]);
		op = *argv[2];
		b = atoi(argv[3]);
		f = get_op_func(argv[2]);
		if (!f)
		{
			printf("Error\n");
			exit(99);
		}
		if ((op == '/' || op == '%') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		result = f(a, b);
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	exit(98);
}

#include "factor.h"

/**
 * factorise - The function factorize a number
 * @buff: pointer to the address of the number
 *
 *
 * Return: int
 */
int factorise(char *buff)
{

	unsigned int num;
	unsigned int i;

	num = atoi(buff);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n", num, num / i, i);
			break;
		}
	}

return (0);
}

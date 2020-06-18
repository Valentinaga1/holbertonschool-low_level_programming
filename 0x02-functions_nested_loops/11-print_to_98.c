			#include "holberton.h"
			#include <stdio.h>
			/**
			*print_to_98 - prints numbers from n to 98
			*@n: input number
			* Return: returns each minute in a specific day
			*/
			void print_to_98(int n)
			{
				while (n < 98)
				{
					printf("%d, ", n);
					n++;
				}
				while (n >= 98)
				{
				if (n != 98)
				{
				printf("%d, ", n);
				}
				else
				{
				printf("%d", n);
				}
				n--;
				}
				_putchar('\n');
				}

#include <stdio.h>
void ft_print_numbers(void)
{
	char number = '0';
	while (number < '9')
	{
		putchar(number);
		number++;
	}
}
int main(void)
{
	ft_print_numbers();
	return 0;
}

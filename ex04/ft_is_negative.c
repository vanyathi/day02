#include <stdio.h>
void ft_print_digits(char a, char b, char c)
{
	putchar(a);
	putchar(b);
	putchar(c);
	putchar(',');
	putchar(' ');
}
void ft_print_comb(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_print_digits(a, b, c);
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
			a++;
	} 	
}
int main(void)
{
	return 0;
}

#include <stdio.h>
void ft_is_negative(int n)
{
	if (n < 0)
	{
		putchar('N');
	}
	else 
	if (n > 0)
	{
		putchar('P');
	}
}
int main(void)
{
	ft_is_negative(int n);
	return 0;
}

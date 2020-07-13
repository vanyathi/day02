#include <stdio.h>
void ft_putchar2(void)
{
	char a = '0';
	char b = '0';
	while(a <= '9')
	{
		putchar(a);
		a++;
		{
			while(b <= 9)
			{
				putchar(b);
				b++;
			}
		}
	}
}
int main(void)
{
 return 0;
}

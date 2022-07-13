#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *tab)
{
	int	i;

	i = 0;
	while (tab[i].str != 0)
	{
		ft_putnbr(tab[i].size);
		write(1, "\n", 1);
		ft_putstr(tab[i].str);
		write(1, "\n", 1);
		ft_putstr(tab[i].copy);
		write(1, "\n", 1);
		i++;
	}

}
/*
int main()
{
	char *str[] = {"hello", "hi", "123"};
	struct s_stock_str *stocks = ft_strs_to_tab(3, str);
	
	ft_show_tab(stocks);	
}
*/

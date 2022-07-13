/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <samiyazubair1414@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:56:54 by szubair           #+#    #+#             */
/*   Updated: 2022/03/26 14:44:28 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 1)
	{	
		n = n * (nb - 1);
		nb--;
	}
	return (n);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_iterative_factorial(4));
}*/

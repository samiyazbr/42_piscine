/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <samiyazubair1414@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:04:16 by szubair           #+#    #+#             */
/*   Updated: 2022/03/26 15:15:51 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	value;

	value = nb;
	if (power < 0)
		return (0);
	if (power == 0 )
		return (1);
	while (power > 1)
	{
		value = value * nb;
		power--;
	}
	return (value);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_iterative_power(2,1));
}*/

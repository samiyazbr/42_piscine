/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:45:01 by szubair           #+#    #+#             */
/*   Updated: 2022/03/23 17:04:09 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 32)
			return (0);
		c++;
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_str_is_printable("\n"));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:32:22 by szubair           #+#    #+#             */
/*   Updated: 2022/03/23 16:49:08 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A' || str[c] > 'Z')
			&& (str[c] < 'a' || str[c] > 'z'))
			return (0);
		else
			c++;
	}
	return (1);
}
/*int main(void)
{
	char a[] = "samiya";
	printf("%d",ft_str_is_alpha(a));
}*/

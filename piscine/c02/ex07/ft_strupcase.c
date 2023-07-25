/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:47:11 by szubair           #+#    #+#             */
/*   Updated: 2022/03/23 17:10:59 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char *str)
{
	char	lower_start;
	char	lower_end;

	lower_start = 'a';
	lower_end = 'z';
	return (*str >= lower_start && *str <= lower_end);
}

char	*ft_strupcase(char *str)
{
	char	*str_start;
	char	uppercase_diff;

	str_start = str;
	uppercase_diff = 'a' - 'A';
	while (*str != '\0')
	{
		if (is_lowercase(str))
			*str -= uppercase_diff;
		str++;
	}
	return (str_start);
}
/*#include <stdio.h>
int main(void)
{
	char a[] = "sdjFDSG";
	printf("%s\n",ft_strupcase(a));
}*/

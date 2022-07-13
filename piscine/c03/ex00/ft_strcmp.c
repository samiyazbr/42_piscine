/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:06:13 by szubair           #+#    #+#             */
/*   Updated: 2022/03/24 14:34:21 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
			return (1);
		if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	if (*s1 != '\0')
		return (1);
	if (*s2 != '\0')
		return (-1);
	return (0);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
}*/

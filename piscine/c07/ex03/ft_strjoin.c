/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <samiyazubair1414@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:16:04 by szubair           #+#    #+#             */
/*   Updated: 2022/03/27 15:23:42 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	final_length(char **string, int size, int sep_length)
{
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(string[i]);
		total += sep_length;
		i++;
	}
	total -= sep_length;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	int		a;
	char	*s;

	a = ft_strlen(sep);
	c = 0;
	i = 0;
	s = malloc(sizeof(char) * (final_length(strs, size, a) + 1));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c] = strs[i][j];
			c++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			s[c] = sep[j];
			c++;
			j++;
		}

		i++;
	}
	s[c] = '\0';
	return (s);
}
#include <stdio.h>
int main(void)
{
	int size = 0;
	char *sep = "";
	char *a[] = {"how",  "are",  "you"};
	printf("%s",ft_strjoin(size, a, sep));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:49:51 by szubair           #+#    #+#             */
/*   Updated: 2022/03/25 13:10:01 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	b;
	unsigned int	dest_length;
	unsigned int	total;

	dest_length = ft_strlen(dest);
	c = ft_strlen(dest);
	b = 0;	
	total = ft_strlen(src) + ft_strlen(dest);
	while (src[b] != '\0' && c < size)
	{
		dest[c] = src[b];
		c++;
		b++;
	}
	if (c == size && size > 0 && c < size)
		dest[c - 1] = '\0';
	else
		dest[c] = '\0';
	if (size > dest_length)
		return (dest_length + ft_strlen(src));
	else
		return (size + ft_strlen(src));
}
#include <stdio.h>
int main(void)
{
 char a[10] = "";
 printf("%d\n",ft_strlcat(a,"4567889019", 0));
 printf("%s\n", a);
 
 char b[10] = "";
 printf("%lu\n", strlcat(b, "4567889019", 0));
 printf("%s\n", b);
}


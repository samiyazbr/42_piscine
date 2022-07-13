/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:46:12 by szubair           #+#    #+#             */
/*   Updated: 2022/03/25 13:15:51 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	d;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		d = 0;
		while (str[i + d] == to_find[d] && str[i + d] != '\0')
		{
			if (to_find[d + 1] == '\0')
				return (&str[i]);
			d++;
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
	char g[] = "my name is samiya";
	char w[] = "is";
	char *a = ft_strstr(g,w);
	printf("%s\n",a);
}*/

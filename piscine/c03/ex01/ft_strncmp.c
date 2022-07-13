/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:39:08 by szubair           #+#    #+#             */
/*   Updated: 2022/03/25 13:11:02 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (s1[i] != '\0' && i < n)
		return (1);
	if (s2[i] != '\0' && i < n)
		return (-1);
	return (0);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	printf("%d\n",ft_strncmp(argv[1], argv[2], atoi(argv[3])));
}
*/

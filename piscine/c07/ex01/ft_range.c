/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <samiyazubair1414@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:10:14 by szubair           #+#    #+#             */
/*   Updated: 2022/03/27 11:10:19 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	b;

	if (min >= max)
		return (0);
	a = malloc(sizeof(int) * ((max - min) + 1));
	if (a == NULL)
		return (0);
	b = 0;
	while (min < max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}

/*#include <stdio.h>
int main(void)
{
	int *c;
	c = ft_range(0 , 9);
	
	int i = 0;
	while (i < 9)
	{
		
		printf("%d, ",c[i]);
		i++;
	}
}*/

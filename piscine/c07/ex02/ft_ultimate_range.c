/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <samiyazubair1414@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:12:59 by szubair           #+#    #+#             */
/*   Updated: 2022/03/27 15:19:16 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

int	ft_ultimate_range(int **range, int min, int max)
{	
	if (min >= max)
	{
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
#include <stdio.h>
int main(void)
{
	int *nums;
	int **range = &nums;
	ft_ultimate_range(range, 0,9);
	int i;
	i = 0;
	while (i < 9)
	{
		printf("%d, ",(*range)[i]);
		i++;
	}
}

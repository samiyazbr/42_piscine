/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <samiyazubair1414@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:25:51 by szubair           #+#    #+#             */
/*   Updated: 2022/03/26 19:26:03 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 0)
	{
		while (av[0][i] != '\0')
		{
			write(1, &av[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
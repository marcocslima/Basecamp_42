/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:21:49 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/09 21:55:07 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar('0' + (i / 10));
			ft_putchar('0' + (i % 10));
			write(1, " ", 1);
			ft_putchar('0' + (j / 10));
			ft_putchar('0' + (j % 10));
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
	i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:47:33 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:40:44 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	result[10];
	int		counter;

	counter = 0;
	if(nb > 2147483647 || nb < -2147483647)
	{
	}
	else
	{
		while (nb > 0)
		{
			result[counter] = (nb % 10) + '0';
			nb = nb / 10;
			counter++;
		}
		while (counter > 0)
		{
			write(1, &result[counter - 1], 1);
			counter--;
		}		
	}
}

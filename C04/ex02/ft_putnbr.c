/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:39:25 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/17 23:46:06 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb / 10 == 0)
	{
		ft_putchar('-');
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	if (nb % 10 < 0)
	{
		ft_putchar((nb % 10) * -1 + '0');
	}
	else
	{
		ft_putchar(nb % 10 + '0');
	}
}

/*
#include <stdio.h>
int main()
{
	ft_putnbr(367800054);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483648);
	printf("\n");
	ft_putnbr(+253678924);
	printf("\n");
	ft_putnbr(-425);
	printf("\n");
}
*/
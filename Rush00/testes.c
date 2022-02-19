/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:41:28 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/05 15:00:06 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush02.c"
//#include "ft_putchar.c"

void	teste_5x3(void)
{
	rush(5, 3);
}

void	teste_3x5(void)
{
	rush(3, 5);
}

void	teste_5x1(void)
{
	rush(5, 1);
}

void	teste_1x1(void)
{
	rush(1, 1);
}

void	teste_1x5(void)
{
	rush(1, 5);
}

void	teste_4x4(void)
{
	rush(4, 4);
}

void	teste_123x42(void)
{
	rush(123, 42);
}

int	main()
{
	teste_5x3();
	write(1,"\n",1);
	teste_3x5();
	write(1,"\n",1);
	teste_5x1();
	write(1,"\n",1);
	teste_1x1();
	write(1,"\n",1);
	teste_1x5();
	write(1,"\n",1);
	teste_4x4();
	write(1,"\n",1);
	teste_123x42();
	write(1,"\n",1);
	return(0);
}
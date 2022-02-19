/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:22:36 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/03 23:05:58 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.h"
#include "ft_putchar.c"

void	test_escreve_a(void)
{
	ft_putchar('a');
	write(1, " = a\n", 5);
}

void	test_escreve_1(void)
{
	ft_putchar('1');
	write(1, " = 1\n", 5);
}

int	main(void)
{
	test_escreve_a();
	test_escreve_1();
	write(1, "Fim dos testes.\n", 16);
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ex02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:22:36 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/03 20:36:34 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_reverse_alphabet.h"
#include "ft_print_reverse_alphabet.c"

void	test_escreve_reverse_alphabet(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}

int	main(void)
{
	test_escreve_reverse_alphabet();
	write(1, "Fim dos testes.\n", 16);
	return(0);
}

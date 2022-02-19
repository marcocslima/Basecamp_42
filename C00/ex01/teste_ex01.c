/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ex01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:22:36 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/03 23:04:03 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_alphabet.h"
#include "ft_print_alphabet.c"

int	main(void)
{
	ft_print_alphabet();
	write(1, "\n\nFim dos testes.\n", 18);
	return(0);
}

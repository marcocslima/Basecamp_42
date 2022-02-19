/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ex03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:52:57 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/03 21:06:20 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_numbers.h"
#include "ft_print_numbers.c"

int main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return(0);
}
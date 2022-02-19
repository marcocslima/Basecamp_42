/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ex05.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:42:03 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/07 19:46:38 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_comb.c"
#include "ft_print_comb.h"

int main()
{
	ft_print_comb();
	write(1, "\n", 1);
	return(0);
}

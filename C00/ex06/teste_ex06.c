/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ex06.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:42:03 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/07 15:20:58 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_comb2.c"
#include "ft_print_comb2.h"

int main()
{
	ft_print_comb2();
	write(1, "\n", 1);
	return(0);
}

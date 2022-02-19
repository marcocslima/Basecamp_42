/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ex07.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:42:03 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/06 20:45:12 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_combn.c"
#include "ft_print_combn.h"

int main()
{
	ft_print_combn(3);
	write(1, "\n", 1);
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ex04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:42:03 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/03 22:21:51 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_is_negative.c"
#include "ft_is_negative.h"

int main()
{
	ft_is_negative(10);
	write(1, "\n", 1);
	return(0);
}

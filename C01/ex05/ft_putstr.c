/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:10:44 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 17:41:17 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
#include <unistd.h>
int main()
{
	char string[] = "palavra";
	char *pstr = string;

	ft_putstr(pstr);
	write(1, "\n", 1);
}
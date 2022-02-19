/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:38:08 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/17 23:45:52 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write (1, &str[index], 1);
		index++;
	}
}

/*
#include <unistd.h>
#include <stdio.h>

int main()
{
	char str[] = "Escreva uma função que mostre um a um os caracteres de uma string na tela.";
	
	ft_putstr(str);
	printf("\n");
}
*/
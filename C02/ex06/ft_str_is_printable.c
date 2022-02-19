/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:55:21 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:09:43 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_str_is_printable(char *str)
{
	int counter;

    counter = 0;
    while (str[counter])
    {
        if (str[counter] < ' ' || str[counter] == 127)
            return(0);
        else
            counter++;
    }
    return (1);
}

#include <stdio.h>

int main(void)
{
	int control;
	
	char str[] = "ABCDEF^?";
	char str2[] = "";
	char str3[] = "";
	char *pstr = str;
	char *pstr2 = str2;
	char *pstr3 = str3;
	
	control = ft_str_is_printable(pstr);
	printf("Apenas imprimíveis (1): %d\n", control);

	control = ft_str_is_printable(pstr2);
	printf("Contém outros caracteres (0): %d\n", control);

	control = ft_str_is_printable(pstr3);
	printf("String vazia (1): %d\n", control);
}

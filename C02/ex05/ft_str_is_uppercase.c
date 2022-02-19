/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:54:49 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:08:58 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_str_is_uppercase(char *str)
{
	int counter;

    counter = 0;
    while (str[counter])
    {
        if (str[counter] < 'A' || str[counter] > 'Z')
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
	
	char str[] = "ABCDEF";
	char str2[] = "sf4f";
	char str3[] = "";
	char *pstr = str;
	char *pstr2 = str2;
	char *pstr3 = str3;
	
	control = ft_str_is_uppercase(pstr);
	printf("Apenas letras minúsculas (1): %d\n", control);

	control = ft_str_is_uppercase(pstr2);
	printf("Contém outros caracteres (0): %d\n", control);

	control = ft_str_is_uppercase(pstr3);
	printf("String vazia (1): %d\n", control);
}

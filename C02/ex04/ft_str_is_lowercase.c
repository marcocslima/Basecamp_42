/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:54:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:08:06 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int counter;

    counter = 0;
    while (str[counter])
    {
        if (str[counter] < 'a' || str[counter] > 'z')
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
	
	char str[] = "abcdef";
	char str2[] = "sf4f";
	char str3[] = "";
	char *pstr = str;
	char *pstr2 = str2;
	char *pstr3 = str3;
	
	control = ft_str_is_lowercase(pstr);
	printf("Apenas letras minúsculas (1): %d\n", control);

	control = ft_str_is_lowercase(pstr2);
	printf("Contém outros caracteres (0): %d\n", control);

	control = ft_str_is_lowercase(pstr3);
	printf("String vazia (1): %d\n", control);
}

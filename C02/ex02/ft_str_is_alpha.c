/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:53:18 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:06:08 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_str_is_alpha(char *str)
{
	int counter;

    counter = 0;
    while (str[counter])
    {
        if (str[counter] < 'A' || str[counter] > 'z' || 
		(str[counter] > 'Z' && str[counter] < 'a'))
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
	
	control = ft_str_is_alpha(pstr);
	printf("Apenas letras (1): %d\n", control);

	control = ft_str_is_alpha(pstr2);
	printf("Contém outros caracteres (0): %d\n", control);

	control = ft_str_is_alpha(pstr3);
	printf("String vazia (1): %d\n", control);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:53:18 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/14 17:06:46 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

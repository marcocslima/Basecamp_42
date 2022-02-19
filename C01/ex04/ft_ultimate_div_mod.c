/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:50:05 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 17:40:10 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int tempdiv;
	int tempmod;
	
	tempdiv = *a / *b;
	tempmod = *a % *b;

	*a = tempdiv;
	*b = tempmod;
}

#include <stdio.h>
int main()
{
	int a = 5;
	int b = 2;
	
	printf("O valor de a é %d\n", a);
	printf("O valor de b é %d\n", b);
	
	ft_ultimate_div_mod(&a, &b);
	
	printf("O valor da divisão é %d\n", a);
	printf("O valor do resto da divisão é %d\n", b);
}
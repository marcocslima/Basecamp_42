/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:34:19 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 17:37:35 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	
	ft_div_mod(4, 2, &a, &b);
	
	printf("O valor de a é: %d\n", a);
	printf("O valor de b é: %d\n", b);
	
}
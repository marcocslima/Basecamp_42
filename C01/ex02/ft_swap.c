/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:57:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 17:36:28 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int main()
{
	int i = 10;
	int j = 20;

	printf("O valor original de a: %d\n", i);
	printf("O valor original de b: %d\n", j);

	ft_swap(&i, &j);

	printf("O valor de a agora é: %d\n", i);
	printf("O valor de b agora é: %d\n", j);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:57:32 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 17:43:36 by mcesar-d         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int counter;
	int slen;
	counter = 0;
	slen = 0;
	
	if (size % 2 != 0)
	{
		slen = (size / 2) + 1;	
		printf("size é ímpar e slen vale: %d\n", slen);
	}
	else
	{
		slen = size / 2;
		printf("size é par e slen vale: %d\n", slen);
	}

	while (counter < slen)
	{
		ft_swap(&tab[counter], &tab[size + 1]);
		counter++;
		slen--;
	}
}
#include <stdio.h>
int main()
{
	int numbers[] = {4,2,9,10,5,200,7};
	int *pnumb = numbers;
	int lennum = sizeof(numbers) / sizeof(numbers[0]);
	
	ft_rev_int_tab(pnumb, lennum);

	printf("%d - %d - %d - %d - %d\n", numbers[0],numbers[1],numbers[2],numbers[3],numbers[4]);

	return(0);	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:42:20 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/07 23:10:25 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void comb(int *arr, size_t n, size_t index) {
	size_t k;
	if (index == n) 
	{
		write(1, &arr[0] + '0', 1);		
		k = 1;
		while(k < n)
		{
			write(1, &arr[k] + '0', 1);
			k++;
		}
	}
	k = index;
	while (k < n) {
		int tmp;
		tmp = arr[k];
		arr[k] = arr[index];
		arr[index] = tmp;
		comb(arr, n, index + 1);
		k++;
	}
}

void ft_print_combn(int n)
{	
	int counter;
	int numeros[10] = {0,1,2,3,4,5,6,7,8,9};
	int arr[n];
	
	counter = 0;
	while (counter < n)
	{
		arr[counter] = numeros[counter];
		counter++;
	}
	comb(arr, sizeof arr / sizeof * arr, 0);	
}

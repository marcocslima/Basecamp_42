/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:13:08 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/18 22:00:17 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
	int index;
	
	index = 0;
	int arr = (int *) malloc((max - min) * sizeof(int));
	while (index > max - min)
	{
		arr[index] = index + 1;
		index++;
	}
	return(arr);
}

#include <stdio.h>
int main()
{
	int *ret = ft_range(1,10);
	
	printf("%d", ret);
	return (0);
}

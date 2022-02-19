/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:41:40 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/18 13:14:25 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char *ft_strdup(char *src)
{
	int index;
	int lensrc;
	char *arr;

	index = 0;
	lensrc = ft_strlen(src) + 1;
	arr = (char *) malloc(lensrc * sizeof(char));
	while(src[index])
	{
		arr[index] = src[index];
		index++;
	}
	arr[index] = '\0';
	return (arr);
}

#include <stdio.h>
int main()
{
	char *res = ft_strdup("Programando em C");
	printf("%s\n", res);
	printf("%p\n", &res);
}
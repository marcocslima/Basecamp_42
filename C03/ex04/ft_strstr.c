/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:18:41 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 09:06:22 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int counter;
	counter = 0;
		
	while(str[counter] != '\0')
		counter++;
		
	return(counter);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	index;
	unsigned int counter;

	index = 0;
	counter = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		while (counter < n)
		{
			index = (*s1++ - *s2++);
			if (index > 0)
				return (1);
			else if (index < 0)
				return (-1);
			else
				return (0);
			counter++;	
		}
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int j;

	if (*to_find == '\0')
		return (str);
	j = ft_strlen(to_find);
	while (*str != '\0')
	{
		if ((*str == *to_find) && ft_strncmp(str, to_find, j) == 0)
			return (str);
		str++;
	}
	return ((void *)0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Programando em C";
	char to_find[] = "gr";

	//printf("\n%p\n\n", ft_strstr(str, to_find));
	printf("\n%s\n\n", ft_strstr(str, to_find));
}
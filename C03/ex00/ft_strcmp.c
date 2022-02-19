/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:29:10 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/18 02:34:22 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	index = 0;
	
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		index = (*s1++ - *s2++);
		if (index != 0)
		{
			return (index);
		}
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char str1[] = "";
	char str2[] = "abcdg";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
}

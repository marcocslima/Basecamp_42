/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:53:14 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/17 13:06:05 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index_d;
	int	index_s;
	index_d = 0;
	index_s = 0;

	while(dest[index_d] != '\0')
		index_d++;
	while(src[index_s] != '\0')
	{
		dest[index_d] = src[index_s];
		index_d++;
		index_s++;
	}
	dest[index_d] = '\0';

	return (dest);
}

#include <stdio.h>
int main()
{
    char dest[] = "Programando";
    char src[] = " em C";

    printf("\n%s\n\n", ft_strcat(dest, src));
}
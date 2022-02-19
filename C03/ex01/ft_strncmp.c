/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:30:47 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/17 13:04:53 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && n - 1 > 0)
	{
		if (*s1 != *s2)
		{
			break ;
		}
		s1++;
		s2++;
		n--;
	}	
	return (*s1 - *s2);
}

#include <stdio.h>
#include <string.h>
int main()
{
	int ret;
	char str1[] = "abc";
	char str2[] = "abcd";
	int n = 4;

	ret = ft_strncmp(str1, str2, n);
	printf("%d\n", ret);
	printf("%d\n", strncmp(str1, str2, n));

	return (0);
}

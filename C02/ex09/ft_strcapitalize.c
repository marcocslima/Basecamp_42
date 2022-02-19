/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:56:45 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:12:06 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *lowercase(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str = lowercase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z'
			&& (str[i - 1] >= '0' && str[i - 1] <= '9'))
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z'
			&& ((str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < 'a' || str[i - 1] > 'z')))
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}


#include <stdio.h>
#include <string.h>

int main()
{
	//int n = 0;
	//char resp[];
	char	string[] = "oi, tudo bem? 42palLvras quarEnta-e-duas; cinquenta+e+um";
	
	printf("\n%s\n\n", ft_strcapitalize(string));
	
	//printf("%s",resp);
}
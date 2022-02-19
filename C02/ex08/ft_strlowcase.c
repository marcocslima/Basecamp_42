/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:56:10 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:11:21 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char *ft_strlowcase(char *str)
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
	return str;
}

#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	int len;
	char string[] = "PAL-VRAS";

	len = sizeof(string);

	ft_strlowcase(string);
	
	//while(string[i] == '\0')

	printf("Exibindo a nova string: \n");
  
  	for( i = 0 ; i <= len; i++)
  	{
    	printf("%c", string[i]);
  	}
	printf("\n");
}
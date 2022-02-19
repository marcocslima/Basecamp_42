/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:02:31 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/16 19:11:27 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int counter;
	counter = 0;
		
	while(str[counter] != '\0')
		counter++;
		
	return(counter);
}

#include <stdio.h>
int main()
{
	char string[] = "outra palavra";
	char *pstr = string;

	printf ("%d\n", ft_strlen(pstr));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:34:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/18 10:05:30 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	in_string(char car, char *str)
{
	while (*str)
	{
		if (*str == car)
			return (1);
		str++;
	}
	return (0);
}

int	space(char car)
{
	if (in_string(car, " ") == 1)
		return (1);
	return (0);
}

int	operator(char car)
{
	if (in_string(car, "+-") == 1)
		return (1);
	return (0);
}

int	numeric(char car)
{
	if (car >= '0' && car <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	m_sig;

	result = 0;
	m_sig = 1;
	while (space(*str))
		str++;
	while (operator(*str))
	{
		if (*str == '-')
			m_sig *= -1;
		str++;
	}
	while (numeric(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * m_sig);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi (" -123479avbfg"));
	return (0);
}
*/
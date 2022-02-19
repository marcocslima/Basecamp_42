/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:33:23 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/19 00:34:40 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;
	int	prime;

	index = 2;
	prime = 1;
	if (nb <= 1)
		prime = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (index <= nb / 2)
	{
		if (nb % index == 0)
		{
			prime = 0;
			break ;
		}
		index++;
	}
	if (prime == 0)
		return (0);
	else
		return (1);
}

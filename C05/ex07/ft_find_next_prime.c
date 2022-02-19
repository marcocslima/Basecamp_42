/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:53:11 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/19 00:35:00 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (is_prime(nb) != 1)
	{
		is_prime(nb++);
	}
	return (nb);
}

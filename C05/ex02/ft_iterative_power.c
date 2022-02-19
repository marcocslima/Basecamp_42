/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:04:56 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/19 00:37:26 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pot;
	int	index;

	pot = nb;
	index = power;
	if ((nb == 0 && power == 0) || (nb != 0 && power == 0))
		return (1);
	if (power < 0)
		return (0);
	while (index > 1)
	{
		pot = pot * nb;
		index--;
	}
	return (pot);
}

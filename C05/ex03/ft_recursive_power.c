/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:22:30 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/17 19:01:36 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pot;

	if ((nb == 0 && power == 0) || (nb != 0 && power == 0))
		return (1);
	if (power < 0)
		return (0);
	else
	{
		pot = nb * ft_recursive_power(nb, power - 1);
	}
	return (pot);
}

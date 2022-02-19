/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:27:31 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/17 18:59:23 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;

	fat = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
		fat = fat * (nb--);
	return (fat);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:52:35 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/17 18:59:33 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		fat = nb * ft_recursive_factorial(nb - 1);
	return (fat);
}

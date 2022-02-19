/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:45:33 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/18 23:15:50 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;
	int	res;

	count = 0;
	if (nb == 1)
		return (1);
	while ((count < nb) && (count <= 46340))
	{
		if (count * count <= nb)
		{
			res = count * count - nb;
			if (res == 0)
				return (count);
		}
		count++;
	}
	return (0);
}

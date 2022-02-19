/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_one_put_four.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:59:35 by jusato            #+#    #+#             */
/*   Updated: 2022/02/13 23:35:17 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if_one(char **mat_resp, int id_lin, int id_col)
{
	if (id_lin == 0)
		mat_resp[0][id_col] = '4';
	if (id_lin == 1)
		mat_resp[3][id_col] = '4';
	if (id_lin == 2)
		mat_resp[id_col][0] = '4';
	if (id_lin == 3)
		mat_resp[id_col][3] = '4';
}

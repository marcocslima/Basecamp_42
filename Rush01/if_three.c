/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_three.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:53:55 by jusato            #+#    #+#             */
/*   Updated: 2022/02/13 23:35:43 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if_four_posit_three(char **mat_resp, int id_col, int id_lin);
void	ifpt_case1(char **mat_resp, int id_col);
void	ifpt_case2(char **mat_resp, int id_col);
void	ifpt_case3(char **mat_resp, int id_col);
void	ifpt_case4(char **mat_resp, int id_col);

void	if_three(char **mat_value, char **mat_resp)
{
	int	id_lin;
	int	id_col;

	id_lin = 0;
	id_col = 0;
	while (id_lin < 4)
	{
		while (id_col < 4)
		{
			if (mat_value[id_lin][id_col] == '3')
				if_four_posit_three(mat_resp, id_col, id_lin);
			id_col ++;
		}
		id_lin ++;
		id_col = 0;
	}
}

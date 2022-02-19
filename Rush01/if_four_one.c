/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_four_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 04:23:50 by jusato            #+#    #+#             */
/*   Updated: 2022/02/13 23:34:14 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if_one(char **mat_resp, int id_lin, int id_col);
void	ifo_case1(char **mat_resp, int id_col);
void	ifo_case2(char **mat_resp, int id_col);
void	ifo_case3(char **mat_resp, int id_col);
void	ifo_case4(char **mat_resp, int id_col);

void	if_four_or_one(char **mat_value, char **mat_resp)
{
	int	id_lin;
	int	id_col;

	id_lin = 0;
	id_col = 0;
	while (id_lin < 4)
	{
		while (id_col < 4)
		{
			if (mat_value[0][id_col] == '4')
				ifo_case1(mat_resp, id_col);
			if (mat_value[1][id_col] == '4')
				ifo_case2(mat_resp, id_col);
			if (mat_value[2][id_col] == '4')
				ifo_case3(mat_resp, id_col);
			if (mat_value[3][id_col] == '4')
				ifo_case4(mat_resp, id_col);
			if (mat_value[id_lin][id_col] == '1')
				if_one(mat_resp, id_lin, id_col);
			id_col ++;
		}
		id_lin ++;
		id_col = 0;
	}
}

void	ifo_case1(char **mat_resp, int id_col)
{
	mat_resp[0][id_col] = '1';
	mat_resp[1][id_col] = '2';
	mat_resp[2][id_col] = '3';
	mat_resp[3][id_col] = '4';
}

void	ifo_case2(char **mat_resp, int id_col)
{
	mat_resp[0][id_col] = '4';
	mat_resp[1][id_col] = '3';
	mat_resp[2][id_col] = '2';
	mat_resp[3][id_col] = '1';
}

void	ifo_case3(char **mat_resp, int id_col)
{
	mat_resp[id_col][3] = '4';
	mat_resp[id_col][2] = '3';
	mat_resp[id_col][1] = '2';
	mat_resp[id_col][0] = '1';
}

void	ifo_case4(char **mat_resp, int id_col)
{
	mat_resp[id_col][3] = '1';
	mat_resp[id_col][2] = '2';
	mat_resp[id_col][1] = '3';
	mat_resp[id_col][0] = '4';
}

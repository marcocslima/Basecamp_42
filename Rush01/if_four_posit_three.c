/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_four_posit_three.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:13:48 by jusato            #+#    #+#             */
/*   Updated: 2022/02/13 23:15:12 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if_four_posit_three(char **mat_resp, int id_col, int id_lin);
void	ifpt_case1(char **mat_resp, int id_col);
void	ifpt_case2(char **mat_resp, int id_col);
void	ifpt_case3(char **mat_resp, int id_col);
void	ifpt_case4(char **mat_resp, int id_col);

void	if_four_posit_three(char **mat_resp, int id_col, int id_lin)
{
	if (mat_resp[2][id_col] == '4' && id_lin == 0)
		ifpt_case1(mat_resp, id_col);
	if (mat_resp[1][id_col] == '4' && id_lin == 1)
		ifpt_case2(mat_resp, id_col);
	if (mat_resp[id_col][2] == '4' && id_lin == 2)
		ifpt_case3(mat_resp, id_col);
	if (mat_resp[id_col][1] == '4' && id_lin == 3)
		ifpt_case4(mat_resp, id_col);
}

void	ifpt_case1(char **mat_resp, int id_col)
{
	if (mat_resp[3][id_col] == '1')
	{
		mat_resp[0][id_col] = '2';
		mat_resp[1][id_col] = '3';
	}
	if (mat_resp[3][id_col] == '3')
	{
		mat_resp[0][id_col] = '1';
		mat_resp[1][id_col] = '2';
	}
}

void	ifpt_case2(char **mat_resp, int id_col)
{
	if (mat_resp[0][id_col] == '1')
	{
		mat_resp[2][id_col] = '3';
		mat_resp[3][id_col] = '2';
	}
	if (mat_resp[0][id_col] == '3')
	{
		mat_resp[2][id_col] = '2';
		mat_resp[3][id_col] = '1';
	}
}

void	ifpt_case3(char **mat_resp, int id_col)
{
	if (mat_resp[id_col][3] == '1')
	{
		mat_resp[id_col][1] = '3';
		mat_resp[id_col][0] = '2';
	}
	if (mat_resp[id_col][0] == '3')
	{
		mat_resp[id_col][1] = '2';
		mat_resp[id_col][0] = '1';
	}
}

void	ifpt_case4(char **mat_resp, int id_col)
{
	if (mat_resp[id_col][0] == '1')
	{
		mat_resp[id_col][2] = '3';
		mat_resp[id_col][3] = '2';
	}
	if (mat_resp[id_col][0] == '3')
	{
		mat_resp[id_col][2] = '2';
		mat_resp[id_col][3] = '1';
	}
}

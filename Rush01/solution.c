/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:56:14 by jusato            #+#    #+#             */
/*   Updated: 2022/02/13 23:19:22 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	if_four_or_one(char **mat_value, char **mat_resp); //
void	one_left(char **mat_resp);
void	two_four(char **mat_value, char **mat_resp);
void	put_three(char **mat_resp, int id_lin, int id_col);
void	fill_blank_1(char **mat_resp);
void	fill_blank_2(char **mat_resp);
void	if_three(char **mat_value, char **mat_resp);

void	solution(char **mat_value, char **mat_resp)
{
	if_four_or_one(mat_value, mat_resp);
	two_four(mat_value, mat_resp);
	one_left(mat_resp);
	fill_blank_1(mat_resp);
	fill_blank_2(mat_resp);
	if_three(mat_value, mat_resp);
	one_left(mat_resp);
}

//observador 2 com 4 na última posição preenche com 3 na frente
void	two_four(char **mat_value, char **mat_resp)
{
	int	id_lin;

	id_lin = 0;
	while (id_lin < 4)
	{
		if (mat_value[0][id_lin] == '2' && mat_resp[3][id_lin] == '4'
			&& mat_resp[0][id_lin] == '0')
			mat_resp[0][id_lin] = '3';
		if (mat_value[1][id_lin] == '2' && mat_resp[0][id_lin] == '4'
			&& mat_resp[3][id_lin] == '0')
			mat_resp[3][id_lin] = '3';
		if (mat_value[2][id_lin] == '2' && mat_resp[id_lin][3] == '4'
			&& mat_resp[id_lin][0] == '0')
			mat_resp[id_lin][0] = '3';
		if (mat_value[3][id_lin] == '2' && mat_resp[id_lin][0] == '4'
			&& mat_resp[id_lin][3] == '0')
			mat_resp[id_lin][3] = '3';
		id_lin++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_mat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:15:39 by oburato           #+#    #+#             */
/*   Updated: 2022/02/13 23:32:47 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**fill_zeros(char **mat, char **argv, int flag_zero);

char	**create_mat(char **argv, int flag_zero)
{
	int		id_lin;
	char	**mat;

	id_lin = 0;
	mat = malloc(4 * sizeof(char *));
	while (id_lin < 4)
	{
		mat[id_lin] = malloc(4);
		id_lin++;
	}
	fill_zeros(mat, argv, flag_zero);
	return (mat);
}

char	**fill_zeros(char **mat, char **argv, int flag_zero)
{
	int		id_lin;
	int		id_col;
	int		id_value;

	id_lin = 0;
	id_value = 0;
	while (id_lin < 4)
	{
		id_col = 0;
		while (id_col < 4)
		{
			if (flag_zero)
				mat[id_lin][id_col] = argv[1][id_value];
			else
				mat[id_lin][id_col] = '0';
			id_value++;
			id_col++;
		}
		id_lin++;
	}
	return (mat);
}

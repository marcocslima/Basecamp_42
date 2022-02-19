/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:50:10 by oburato           #+#    #+#             */
/*   Updated: 2022/02/13 23:28:38 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_one(char	**mat);
int	check_four(char	**mat);
int	check_three(char	**mat);

int	check_error(char **mat)
{
	if (check_one(mat) == 1)
		return (1);
	else if (check_four(mat) == 1)
		return (1);
	else if (check_three(mat) == 1)
		return (1);
	return (0);
}

int	check_one(char	**mat)
{
	int	count;
	int	id_lin;
	int	id_col;

	id_lin = 0;
	while (id_lin < 4)
	{
		count = 0;
		id_col = 0;
		while (id_col < 4)
		{
			if (mat[id_lin][id_col] == '1')
				count++;
			id_col++;
		}
		if (count > 1)
			return (1);
		id_lin++;
	}
	return (0);
}

int	check_four(char **mat)
{
	int	id_lin;
	int	id_col;

	id_col = 0;
	id_lin = 0;
	while (id_col < 4)
	{
		if ((mat[id_lin][id_col] == '4')
		&& (mat[id_lin + 1][id_col] != '1'))
			return (1);
		id_col ++;
	}
	id_col = 0;
	id_lin = 2;
	while (id_col < 4)
	{
		if ((mat[id_lin][id_col] == '4')
		&& (mat[id_lin + 1][id_col] != '1'))
			return (1);
		id_col ++;
	}
	return (0);
}

int	check_three(char	**mat)
{
	int	id_lin;
	int	id_col;

	id_col = 0;
	id_lin = 0;
	while (id_col < 4)
	{
		if ((mat[id_lin][id_col] == '3')
		&& (mat[id_lin + 1][id_col] == '3'))
			return (1);
		id_col ++;
	}
	id_col = 0;
	id_lin = 2;
	while (id_col < 4)
	{
		if ((mat[id_lin][id_col] == '3')
		&& (mat[id_lin + 1][id_col] == '3'))
			return (1);
		id_col ++;
	}
	return (0);
}

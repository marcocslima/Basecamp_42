/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:21:01 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/13 23:36:41 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char	**create_mat(char **argv, int flag_zero);
int		check_error(char **matriz);
void	solution(char **mat_value, char **mat_resp);
int		print_mat(char **mat_resp);
int		free_matrix(char **mat_value, char **mat_resp);
char	**fill_zeros(char **matrix, char **argv);
void	string_input(char **argv);

int	main(int argc, char **argv)
{
	char	**mat_value;
	char	**mat_resp;

	(void)argc;
	string_input(argv);
	mat_value = create_mat(argv, 1);
	if (check_error(mat_value))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	mat_resp = create_mat(argv, 0);
	solution(mat_value, mat_resp);
	print_mat(mat_resp);
	free_matrix(mat_value, mat_resp);
	free(argv[1]);
	return (0);
}

void	string_input(char **argv)
{
	int		i;
	int		s;
	char	*pstr;

	i = 0;
	s = 0;
	pstr = malloc(16);
	while (i <= 31)
	{
		pstr[s] = argv[1][i];
		i = i + 2;
		s ++;
	}
	argv[1] = pstr;
}

int	print_mat(char **mat_resp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			write(1, &mat_resp[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}

int	free_matrix(char **mat_value, char **mat_resp)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(mat_resp[i]);
		i++;
	}
	free(mat_resp);
	i = 0;
	while (i < 4)
	{
		free(mat_value[i]);
		i++;
	}
	free(mat_value);
	return (0);
}

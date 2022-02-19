/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_left.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:43:59 by jusato            #+#    #+#             */
/*   Updated: 2022/02/13 23:36:01 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	one_left(char **mat_resp)
{
	int		count_c1;
	int		count_c2;
	int		count_c3;
	int		count_c4;
	int		id_lin;
	int		count;
	char	num[5];

	num[0] = '1';
	num[1] = '2';
	num[2] = '3';
	num[4] = '4';
	id_lin = 0;
	count = 0;
	while (count < 4)
	{
		count_c1 = 0;
		count_c2 = 0;
		count_c3 = 0;
		count_c4 = 0;
		while (id_lin < 4)
		{
			if (mat_resp[id_lin][0] == num[count])
				count_c1 = id_lin + 1;
			if (mat_resp[id_lin][1] == num[count])
				count_c2 = id_lin + 1;
			if (mat_resp[id_lin][2] == num[count])
				count_c3 = id_lin + 1;
			if (mat_resp[id_lin][3] == num[count])
				count_c4 = id_lin + 1;
			if ((count_c1 == 0) && (count_c2 != 0) && (count_c3 != 0)
				&& (count_c4 != 0))
				mat_resp[(9 - (count_c2 + count_c3 + count_c4))][0]
					= num[count];
			if ((count_c2 == 0) && (count_c1 != 0) && (count_c3 != 0)
				&& (count_c4 != 0))
				mat_resp[(9 - (count_c1 + count_c3 + count_c4))][1]
					= num[count];
			if ((count_c3 == 0) && (count_c2 != 0) && (count_c1 != 0)
				&& (count_c4 != 0))
				mat_resp[(9 - (count_c2 + count_c1 + count_c4))][2]
					= num[count];
			if ((count_c4 == 0) && (count_c2 != 0) && (count_c3 != 0)
				&& (count_c1 != 0))
				mat_resp[(9 - (count_c2 + count_c3 + count_c1))][3]
					= num[count];
			id_lin ++;
		}
		id_lin = 0;
		count ++;
	}
}

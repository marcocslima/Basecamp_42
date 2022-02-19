/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_blanks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:19:30 by jusato            #+#    #+#             */
/*   Updated: 2022/02/13 23:19:32 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_blank_1(char **mat_resp)
{
	int	id_lin;
	int	count1;
	int	count2;
	int	count3;
	int	count4;
	int	position;
	int	sum1;
	int	sum2;
	int	sum3;
	int	sum4;

	id_lin = 0;
	sum1 = 0;
	sum2 = 0;
	sum3 = 0;
	sum4 = 0;
	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
	while (id_lin < 4)
	{
		if (mat_resp[id_lin][0] != '0')
		{
			sum1 += (mat_resp[id_lin][0] - '0');
			count1 ++;
		}
		if (mat_resp[id_lin][1] != '0')
		{
			sum2 += (mat_resp[id_lin][1] - '0');
			count2 ++;
		}
		if (mat_resp[id_lin][2] != '0')
		{
			sum3 += (mat_resp[id_lin][2] - '0');
			count3++;
		}
		if (mat_resp[id_lin][3] != '0')
		{
			sum4 += (mat_resp[id_lin][3] - '0');
			count4++;
		}
		position = 0;
		while (position < 4)
		{
			if (count1 == 3 && mat_resp[position][0] == '0')
				mat_resp[position][0] = (10 - sum1) + '0';
			if (count2 == 3 && mat_resp[position][1] == '0')
				mat_resp[position][1] = (10 - sum2) + '0';
			if (count3 == 3 && mat_resp[position][2] == '0')
				mat_resp[position][2] = (10 - sum3) + '0';
			if (count4 == 3 && mat_resp[position][3] == '0')
				mat_resp[position][3] = (10 - sum4) + '0';
			position++;
		}
	id_lin++;
	}
}

void	fill_blank_2(char **mat_resp)
{
	int	id_col;
	int	count1;
	int	count2;
	int	count3;
	int	count4;
	int	position;
	int	sum1;
	int	sum2;
	int	sum3;
	int	sum4;

	id_col = 0;
	sum1 = 0;
	sum2 = 0;
	sum3 = 0;
	sum4 = 0;
	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
	while (id_col < 4)
	{	
		if (mat_resp[0][id_col] != '0')
		{
			sum1 += (mat_resp[0][id_col] - '0');
			count1 ++;
		}
		if (mat_resp[1][id_col] != '0')
		{
			sum2 += (mat_resp[1][id_col] - '0');
			count2 ++;
		}
		if (mat_resp[2][id_col] != '0')
		{
			sum3 += (mat_resp[2][id_col] - '0');
			count3++;
		}
		if (mat_resp[3][id_col] != '0')
		{
			sum4 += (mat_resp[3][id_col] - '0');
			count4++;
		}
		position = 0;
		while (position < 4)
		{
			if (count1 == 3 && mat_resp[0][position] == '0')
				mat_resp[0][position] = (10 - sum1) + '0';
			if (count2 == 3 && mat_resp[1][position] == '0')
				mat_resp[1][position] = (10 - sum2) + '0';
			if (count3 == 3 && mat_resp[2][position] == '0')
				mat_resp[2][position] = (10 - sum3) + '0';
			if (count4 == 3 && mat_resp[3][position] == '0')
				mat_resp[3][position] = (10 - sum4) + '0';
			position++;
		}
	id_col ++;
	}
}

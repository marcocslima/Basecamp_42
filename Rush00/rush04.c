/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:30:22 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/05 15:40:08 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	colun_1(int contl, int l)
{
	char	character;

	if (contl == 1)
	{
		character = 'A';
	}
	else if (contl == l)
	{
		character = 'C';
	}
	else
	{
		character = 'B';
	}
	return (character);
}

char	colun_l(int contl, int l)
{
	char	character;

	if (contl == 1)
	{
		character = 'C';
	}
	else if (contl == l)
	{
		character = 'A';
	}
	else
	{
		character = 'B';
	}
	return (character);
}

char	colun_mid(int contl, int l)
{
	char	character;

	if ((contl == 1) || (contl == l))
	{
		character = 'B';
	}
	else
	{
		character = ' ';
	}
	return (character);
}

char	select_c(int contc, int contl, int c, int l)
{
	char	character;

	if (contc == 1)
	{
		character = colun_1(contl, l);
	}
	else if (contc == c)
	{
		character = colun_l(contl, l);
	}
	else
	{
		character = colun_mid(contl, l);
	}
	return (character);
}

void	rush(int c, int l)
{
	int		contc;
	int		contl;
	char	carac;

	contc = 1;
	contl = 1;
	while (contl <= l)
	{
		while (contc <= c)
		{
			carac = select_c(contc, contl, c, l);
			ft_putchar(carac);
			contc++;
		}
	contc = 1;
	contl++;
		ft_putchar ('\n');
	}
}

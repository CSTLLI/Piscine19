/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_alone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 00:45:23 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/21 00:49:17 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_alone_lines(int tab[4][4])
{
	int i;
	int j;
	int sum;

	i = 0;
	while (i < 4)
	{
		j = 0;
		sum = 0;
		while (j < 4 && sum < 9)
		{
			sum = sum + tab[i][j];
			j++;
		}
		if (sum == 9)
			tab[i][j] = 1;
		i++;
	}
}

void	check_alone_columns(int tab[4][4])
{
	int i;
	int j;
	int sum;

	i = 0;
	while (i < 4)
	{
		j = 0;
		sum = 0;
		while (j < 4 && sum < 9)
		{
			sum = sum + tab[j][i];
			j++;
		}
		if (sum == 9)
			tab[j][i] = 1;
		i++;
	}
}

void	check_alone(int tab[4][4])
{
	check_alone_lines(tab);
	check_alone_columns(tab);
}

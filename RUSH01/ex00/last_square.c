/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_square.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 18:17:48 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/21 21:32:13 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	filling(int *list, int i, int j, int tab[4][4])
{
	int n;

	n = 0;
	while (n < 4)
	{
		if (list[n] != 0)
			tab[i][j] = list[n];
		n++;
	}
}

int		*possibilities(int i, int j, int tab[4][4])
{
	int *alreadythere_list;
	alreadythere_list = malloc(4 * 4);
	int counter;

	counter = 0;
	while (counter < 4)
	{
		if (tab[i][counter] == 1)
			alreadythere_list[0] = tab[i][counter];
		else if (tab[i][counter] == 2)
			alreadythere_list[1] = tab[i][counter];
		else if (tab[i][counter] == 3)
			alreadythere_list[2] = tab[i][counter];
		else if (tab[i][counter] == 4)
			alreadythere_list[3] = tab[i][counter];
		counter++;
	}
	counter = 0;
	while (counter < 4)
	{
		if (tab[counter][j] == 1)
			alreadythere_list[0] = tab[counter][j];
		else if (tab[counter][j] == 2)
			alreadythere_list[1] = tab[counter][j];
		else if (tab[counter][j] == 3)
			alreadythere_list[2] = tab[counter][j];
		else if (tab[counter][j] == 4)
			alreadythere_list[3] = tab[counter][j];
		counter++;
	}
	return (alreadythere_list);
}

int		possibilities_counter(int *list)
{
	int count;

	count = 0;
	if (list[0] == 0)
		count++;
	if (list[1] == 0)
		count++;
	if (list[2] == 0)
		count++;
	if (list[3] == 0)
		count++;
	return (count);
}

int		which_digit(int *list)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < 4)
	{
		sum = sum + list[i];
		i++;
	}
	return (10 - sum);
}

void	last_square(int tab[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[j][i] == 0)
			{
				if (possibilities_counter(possibilities(i, j, tab)) == 1)
				{
					tab[j][i] = which_digit(possibilities(i, j, tab));
				}
			}
			j++;
		}
		i++;
	}
}

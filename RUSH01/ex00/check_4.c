/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 23:50:09 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/21 00:54:37 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_4_colup(int *list, int tab[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		if (list[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[j][i] = j + 1;
				j++;
			}
		}
		i++;
	}
}

void	check_4_lineleft(int *list, int tab[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		if (list[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[i][j] = j + 1;
				j++;
			}
		}
		i++;
	}
}

void	check_4_coldown(int *list, int tab[4][4])
{
	int i;
	int j;
	int value;

	i = 3;
	while (i > -1)
	{
		if (list[i] == 4)
		{
			j = 3;
			value = 1;
			while (j > -1)
			{
				tab[j][i] = value;
				j--;
				value++;
			}
		}
		i--;
	}
}

void	check_4_lineright(int *list, int tab[4][4])
{
	int i;
	int j;
	int value;

	i = 3;
	while (i > -1)
	{
		if (list[i] == 4)
		{
			j = 3;
			value = 1;
			while (j > -1)
			{
				tab[i][j] = value;
				j--;
				value++;
			}
		}
		i--;
	}
}

void	check_4(int *list1, int *list2, int *list3, int *list4, int tab[4][4])
{
	check_4_colup(list1, tab);
	check_4_lineleft(list2, tab);
	check_4_coldown(list3, tab);
	check_4_lineright(list4, tab);
}

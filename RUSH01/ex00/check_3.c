/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 00:29:54 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/21 01:29:40 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_3_colup(int *list, int tab[4][4])
{
	int i;
	int j;
	int value;

	i = 0;
	while (i < 4)
	{
		if (list[i] == 3)
		{
			j = 0;
			value = 2;
			while (j < 3 && value < 5)
			{
				tab[j][i] = value;
				value++;
				j++;
			}
		}
		i++;
	}
}

void	check_3_lineleft(int *list, int tab[4][4])
{
	int i;
	int j;
	int value;

	i = 0;
	while (i < 4)
	{
		if (list[i] == 3)
		{
			j = 0;
			value = 2;
			while (j < 3 && value < 5)
			{
				tab[i][j] = value;
				value++;
				j++;
			}
		}
		i++;
	}
}

void	check_3_coldown(int *list, int tab[4][4])
{
	int i;
	int j;
	int value;

	i = 3;
	while (i > -1)
	{
		if (list[i] == 3)
		{
			j = 3;
			value = 2;
			while (j > -1 && value < 5)
			{
				tab[j][i] = value;
				value++;
				j--;
			}
		}
		i--;
	}
}

void	check_3_lineright(int *list, int tab[4][4])
{
	int i;
	int j;
	int value;

	i = 3;
	while (i > -1)
	{
		if (list[i] == 3)
		{
			j = 3;
			value = 2;
			while (j > -1 && value < 5)
			{
				tab[i][j] = value;
				value++;
				j--;
			}
		}
		i--;
	}
}

void	check_3(int *list1, int *list2, int *list3, int *list4, int tab[4][4])
{
	check_3_colup(list1, tab);
	check_3_lineleft(list2, tab);
	check_3_coldown(list3, tab);
	check_3_lineright(list4, tab);
}

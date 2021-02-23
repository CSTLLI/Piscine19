/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 08:55:32 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/21 21:51:40 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	matrice_initialization(int tab[4][4]);
void	print(int tab[4][4]);
void	check_4(int *list1, int *list2, int *list3, int *list4, int tab[4][4]);
void	check_3(int *list1, int *list2, int *list3, int *list4, int tab[4][4]);
void	check_alone(int tab[4][4]);
void	last_square(int tab[4][4]);
int		*transmission(char *str, int *strn, int dep);
int		ft_valid(char *str);

int		main(int argc, char *argv[])
{
	int		tab[4][4];
	char	*str;
	int		*colup;
	int		*lineleft;
	int		*coldown;
	int		*lineright;

	colup = malloc(4 * 4);
	lineleft = malloc(4 * 4);
	coldown = malloc(4 * 4);
	lineright = malloc(4 * 4);
	argc = 1;
	str = argv[argc];
	if (ft_valid(str) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	transmission(str, colup, 0);
	transmission(str, coldown, 8);
	transmission(str, lineleft, 16);
	transmission(str, lineright, 24);
	matrice_initialization(tab);
	check_4(colup, lineleft, coldown, lineright, tab);
	check_3(colup, lineleft, coldown, lineright, tab);
	check_alone(tab);
	last_square(tab);
	print(tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:49:33 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/11 15:49:59 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tab2[size];
	int x;

	x = 0;
	while (x < size)
	{
		tab2[x] = tab[size - x - 1];
		x++;
	}
	x = 0;
	while (x < size)
	{
		tab[x] = tab2[x];
		x++;
	}
}

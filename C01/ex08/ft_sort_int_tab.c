/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:09:14 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/12 09:47:26 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < size - 1)
	{
		while (b < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				ft_swap(&tab[a], &tab[a + 1]);
			}
			++a;
		}
		a = 0;
		++b;
	}
}

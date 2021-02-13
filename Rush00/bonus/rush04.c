/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:04:14 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/13 12:17:31 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void write_line(char left, char middle, char right, int size)
{
	if (size > 0)
	{
		ft_putchar(left);
	}
	while(size > 2)
	{
		ft_putchar(middle);
		size--;
	}
	if (size == 2)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void rush04(int x, int y)
{
	if (y > 0)
	{
		write_line('A', 'B', 'C', x);
	}
	while (y > 2)
	{
		write_line('B', ' ', 'B', x);
		y--;
	}
	if (y==2)
	{
		write_line('C', 'B', 'A', x);
	}
}


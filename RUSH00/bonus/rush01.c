/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:52:09 by spatez            #+#    #+#             */
/*   Updated: 2021/02/13 17:27:40 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

static void	ft_write_line(char left, char middle, char right, int x)
{
	ft_putchar(left);
	while (x > 2)
	{
		ft_putchar(middle);
		x -= 1;
	}
	if (x == 2)
		ft_putchar(right);
	ft_putchar('\n');
}

void		rush01(int x, int y)
{
	if (x <= 0 || y <= 0 || y > 2147483647 || x > 2147483647)
		return ;
	ft_write_line('/', '*', '\\', x);
	while (y > 2)
	{
		ft_write_line('*', ' ', '*', x);
		y -= 1;
	}
	if (y == 2)
		ft_write_line('\\', '*', '/', x);
}

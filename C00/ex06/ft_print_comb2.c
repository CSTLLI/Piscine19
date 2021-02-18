/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 18:37:03 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/09 18:14:27 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	test_value(char a, char b, char c, char d)
{
	if (!(a == c) || !(b == d))
	{
		if (a < c)
		{
			display(a, b, c, d);
		}
		else if (a == c)
		{
			if (b < d)
			{
				display(a, b, c, d);
			}
		}
	}
}

void	while_rev(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					test_value(a, b, c, d);
					d = d + 1;
				}
				c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while_rev(a, b, c, d);
}

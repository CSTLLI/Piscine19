/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:57:48 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/17 18:06:08 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_check(char *base)
{
	int i;
	int j;
	int size;

	size = ft_strlen(base);
	i = 0;
	j = 1;
	if (size == 0 || size == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	number;

	number = (long)nbr;
	size = ft_strlen(base);
	if (ft_check(base) == 0)
		return ;
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (number >= size)
	{
		ft_putnbr_base(number / size, base);
		ft_putnbr_base(number % size, base);
	}
	else
		ft_putchar(base[number]);
}

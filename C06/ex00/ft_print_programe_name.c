/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_programe_name.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:56:29 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/18 20:21:38 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	argc = 0;
	ft_putstr(*argv);
	return (0);
}

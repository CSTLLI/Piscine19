/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:42:21 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/18 19:08:43 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_sqrt(int nb)
{
	int x;
	
	x = 0;
	if (nb  == 1)
		return (1);
	if (nb % 2 == 0)
		while (x < nb / 2)
		{
			if ((x*x) == nb)
				return (x);
			x += 2;
		}
	else
	{
		x++;
		while (x < nb / 2)
		{
			if (x*x == nb)
				return (x);
			x += 2;
		}
	}
	return (0);
}

//05

#include <stdio.h>
int main()
{
    printf("%d", ft_sqrt(2147483647));
    return (0);
}

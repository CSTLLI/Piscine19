/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:42:21 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/18 17:32:23 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_sqrt(int nb)
{
	int x;
	
	x = 1;
	if (nb  == 0)
		return (0);
	if (nb  == 1)
		return (1);
	if (nb == 2147483647)
		return (0);
	while (x*x < nb)
	{
		x++;
	}
	if ((nb % x) == 0)
		return (x);
	else
		return (0);
}

//05

#include <stdio.h>
int main()
{
    printf("%d", ft_sqrt(2147483647));
    return (0);
}
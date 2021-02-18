/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:39:32 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/18 17:49:57 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		diviseur(int d, int nb)
{	
	if (d * d > nb)
		return (1);
	else if (nb % d == 0)
			return (0);
		else
			return diviseur((d + 1), nb);
}

int		ft_is_prime(int nb)
{
	return (diviseur(2, nb));
}

int ft_find_next_prime(int nb)
{
	nb ++;
	while(ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_find_next_prime(297));
    return (0);
}
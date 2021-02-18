/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:24:44 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/18 16:35:15 by vcastell         ###   ########.fr       */
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

//06
#include <stdio.h>
int main()
{
    printf("%d", ft_is_prime(84));
    return (0);
}
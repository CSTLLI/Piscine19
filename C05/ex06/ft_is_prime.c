/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:24:44 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/22 13:42:20 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		diviseur(int d, int nb)
{
	if (nb == 2147483647)
		return (1);
	if (nb < 2)
		return (0);
	if (d * d > nb)
		return (1);
	else if (nb % d == 0)
		return (0);
	else
		return (diviseur((d + 1), nb));
}

int		ft_is_prime(int nb)
{
	return (diviseur(2, nb));
}

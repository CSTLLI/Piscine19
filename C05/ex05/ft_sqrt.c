/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:42:21 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/20 18:00:34 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sqrt_by_recursion(int nb, int incrementer, int stopper)
{
	if (nb == 1)
		return (1);
	if (nb <= 0 || incrementer > 46340 || incrementer > stopper)
		return (0);
	if ((incrementer * incrementer) == nb)
		return (incrementer);
	return (sqrt_by_recursion(nb, ++incrementer, stopper));
}

int		ft_sqrt(int nb)
{
	return (sqrt_by_recursion(nb, 1, (nb / 2)));
}

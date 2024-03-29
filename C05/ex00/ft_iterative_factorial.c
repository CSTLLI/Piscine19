/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:28:26 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/19 09:24:46 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	n = nb;
	while (i < n)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}

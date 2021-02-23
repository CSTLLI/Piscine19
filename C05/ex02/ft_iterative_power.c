/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:51:56 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/22 13:28:23 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int n;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	n = nb;
	while (i < power)
	{
		nb *= n;
		i++;
	}
	return (nb);
}

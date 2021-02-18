/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:51:56 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/18 13:30:49 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int n;
	
	if (power < 0)
		return 0;
	if (power == 0 || nb == 0)
		return (1);
	i = 1;
	n = nb;
	while ( i < power)
	{
		nb *= n;
		i++;
	}
	return nb;
}

#include <stdio.h>
int main()
{
    printf("%d", ft_iterative_power(-7,2));
    return (0);
}
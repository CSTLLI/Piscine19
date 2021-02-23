/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:33:25 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/23 14:58:23 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tri;
	int i;

	if (min >= max)
	{
		tri = NULL;
		return (0);
	}
	tri = (int *)malloc((max - min) * 4);
	i = 0;
	while (min < max)
	{
		tri[i] = min;
		i++;
		min++;
	}
	return (tri);
}

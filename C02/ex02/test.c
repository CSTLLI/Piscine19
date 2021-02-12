/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 19:34:05 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/11 19:35:55 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;
	int val;

	val = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			val++;
		}
		i++;
	}
	if (i == val)
	{
		val = 1;
	}
	else
	{
		val = 0;
	}
	printf("%d", val);
	return val;
}

int		main(void)
{
	char test[] = "AazZtestZz";
	ft_str_is_alpha(test);
	return 0;
}

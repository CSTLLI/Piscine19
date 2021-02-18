/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:14:31 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/17 09:27:41 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int val;

	val = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			val++;
		i++;
	}
	if (i == val || i == 0)
		val = 1;
	else
		val = 0;
	return (val);
}

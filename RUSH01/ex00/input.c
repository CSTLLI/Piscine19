/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:52:29 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/21 20:23:34 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_valid(char *str)
{
	int i;
	int size;

	size = ft_strlen(str);
	i = 0;
	if (size != 31)
		return (0);
	while (i < 32)
	{
		if (str[i] < '1' || str[i] > '4')
			return (0);
		i += 2;
	}
	return (1);
}

int		*transmission(char *str, int *strn, int dep)
{
	int c;

	c = 0;
	while (str[dep] != '\0' && c != 4)
	{
		if (str[dep] == '1')
			strn[c++] = 1;
		else if (str[dep] == '2')
			strn[c++] = 2;
		else if (str[dep] == '3')
			strn[c++] = 3;
		else if (str[dep] == '4')
			strn[c++] = 4;
		dep += 2;
	}
	strn[c] = '\0';
	return (strn);
}

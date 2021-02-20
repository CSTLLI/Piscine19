/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:02:31 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/18 21:17:22 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
			|| c == ' ');
}

int		ope(char *str)
{
	int i;
	int neg;
	int moins;

	moins = 0;
	i = 0;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
			moins++;
		i++;
	}
	if (moins % 2 == 0)
		return (1);
	else
		return (-1);
	return (neg);
}

int		ft_check(char *str, int i)
{
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int			mult;
	int			i;
	int			nb;
	int			neg;

	mult = 1;
	i = 0;
	nb = 0;
	while (str[i])
	{
		while (ft_is_space(str[i]) == 1)
			i++;
		ft_check(str, i);
		i--;
		while (i >= 0 && (str[i] >= '0' && str[i] <= '9'))
		{
			nb = nb + (str[i] - '0') * mult;
			i--;
			mult = mult * 10;
		}
		neg = ope(str);
		return (nb * neg);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:06:01 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/17 13:37:02 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkspecial(char *str, int i)
{
	int val;

	if (((str[i] >= 'a') && (str[i] <= 'z')) ||
		((str[i] >= 'A') && (str[i] <= 'Z')) ||
		((str[i] >= '0') && (str[i] <= '9')))
		val = 0;
	else
		val = 1;
	return (val);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	if ((str[i] >= 'A') && (str[i] <= 'Z'))
		i++;
	else
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}

char	*ft_strlowcase2(char *str, int j)
{
	while ((str[j] >= 'a') && (str[j] <= 'z'))
	{
		str[j] = (str[j] + 32);
		j++;
	}
	return (&str[j]);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		return (str);
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (((ft_checkspecial(str, i)) == 1 || (str[i] == ' ')) &&
			((str[i + 1] >= 'a') && (str[i + 1] <= 'z')))
		{
			str[i + 1] = (str[i + 1] - 32);
			j = i + 1;
			ft_strlowcase2(str, j);
			i = j;
			j = 0;
		}
		i++;
	}
	return (str);
}

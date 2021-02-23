/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:14:45 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/23 16:56:56 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int sizedest;
	int sizesrc;
	int i;

	sizesrc = ft_strlen(src);
	sizedest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[sizedest] = src[i];
		i++;
		sizedest++;
	}
	dest[sizedest] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	while (size > i)
	{
		sum += ft_strlen(strs[i]);
		i++;
	}
	sum += i * ft_strlen(sep);
	str = malloc(sizeof(char) * sum);
	if (!(str = (char*)malloc((sizeof(char) * sum))))
		return (NULL);
	i = 0;
	while (size > i)
	{
		ft_strcat(str, strs[i]);
		i++;
		if (size > i)
			ft_strcat(str, sep);
	}
	return (str);
}

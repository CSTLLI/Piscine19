/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:37 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/22 19:42:38 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(src);
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int 	size;
	char 	*cop;

	size = ft_strlen(src);
	cop = (char *)malloc(size);
	ft_strcpy(cop, src);
	return (cop);
}

//ex00
#include <stdio.h>
int main () {
    char src[] = "Val";
    printf("should be -->|Val|\n");
    printf("is        -->|%s|\n\n", ft_strdup(src));
    return 0;
}
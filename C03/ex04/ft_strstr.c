/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:04:41 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/24 19:14:12 by vcastell         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int val;
	int size;

	val = 0;
	i = 0;
	j = 0;
	size = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
}

//ex04
#include <stdio.h>
#include <string.h>
int main () {
	char str[] = "xavier mait vit en Belgique mais est Francais";
	char str2[] = "";
	char to_find[] = "mais";
	char to_find2[] = "";
	char to_find3[] = "maiss";
	printf("should be -->%s\n", strstr(str, to_find));
	printf("is        -->%s\n\n", ft_strstr(str, to_find));
	printf("should be -->%s\n", strstr(str, to_find2));
	printf("is        -->%s\n\n", ft_strstr(str, to_find2));
	printf("should be -->%s\n", strstr(str, to_find3));
	printf("is        -->%s\n\n", ft_strstr(str, to_find3));
	printf("should be -->%s\n", strstr(str2, to_find2));
	printf("is        -->%s\n\n", ft_strstr(str2, to_find2));
	return(0);
}

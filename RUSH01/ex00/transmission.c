/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transmission.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:05:40 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/20 16:45:05 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
			|| c == ' ');
}

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

char	transmission(char *str, char *strn, int dep)
{
	int c;
	int size;
	
	c = 0;
	size = ft_strlen(str);
	if (size != 31)
		return 0;
	while(str[dep] && c != 4)
	{
		if ((str[dep] >= '0' || str[dep] <= '9') && ft_is_space(str[dep]) == 0)
		{
			strn[dep] = str[dep];
			// printf("%c", strn[dep]);
			c++;
		}
		dep++;;
	}
	// printf("\n");
	// printf("%s", strn);
	return (*strn);
}

int 	main(void)
{
	char str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char str1[] = "";
	// char str2[] = "";
	// printf("%s", str);
	// printf("\n");

	transmission(str, str1, 0);
	printf("%s", str1);
	printf("\n");

	// printf("\n");

	// transmission(str, str2, 8);
	// printf("%s", str2);
	// printf("\n");

	return 0;
}
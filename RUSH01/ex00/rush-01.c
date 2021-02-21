/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:14:34 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/21 16:06:55 by vcastell         ###   ########.fr       */
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

int	ft_valid(char *str)
{
	int i;
	
	i = 0;
	while (i < 32)
	{
		if (str[i] < '1' || str[i] > '4')
			return (0);
		i += 2;
	}
	return (1);
}

int	*transmission(char *str, int *strn, int dep)
{
	int c;
	
	c = 0;
	while(str[dep] != '\0' && c != 4)
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

int		main(int argc, char *argv[])
{
	int size;
	int valid;
	char *str;
	int str1[80];
	int str2[80];
	int str3[80];
	int str4[80];
		
	argc = 1;
	str = argv[argc];
	
	size = ft_strlen(str);
	valid = ft_valid(str);
	if (size != 31 || valid == 0)
		return (0);

	transmission(str, str1, 0);
	printf("%i", str1[0]);
	printf("%i", str1[1]);
	printf("%i", str1[2]);
	printf("%i", str1[3]);
	printf("\n");

	printf("\n");

	transmission(str, str2, 8);
	printf("%i", str2[0]);
	printf("%i", str2[1]);
	printf("%i", str2[2]);
	printf("%i", str2[3]);
	printf("\n");
	
	printf("\n");

	transmission(str, str3, 16);
	printf("%i", str3[0]);
	printf("%i", str3[1]);
	printf("%i", str3[2]);
	printf("%i", str3[3]);
	printf("\n");

	printf("\n");

	transmission(str, str4, 24);
	printf("%i", str4[0]);
	printf("%i", str4[1]);
	printf("%i", str4[2]);
	printf("%i", str4[3]);
	printf("\n");
	
	return 0;
}

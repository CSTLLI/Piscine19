/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transmission.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:05:40 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/21 16:03:21 by vcastell         ###   ########.fr       */
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

int	*transmission(char *str, int *strn, int dep)
{
	int c;
	int size;
	
	c = 0;
	size = ft_strlen(str);
	if (size != 31)
		return 0;
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

int 	main(void)
{
	char str[] = "4 3 2 1 1 2 2 2 4 3 2 2 1 2 2 3";
	int str1[80];
	int str2[80];
	int str3[80];
	int str4[80];	
	printf("%s", str);
	printf("\n");

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
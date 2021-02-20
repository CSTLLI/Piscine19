/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:14:34 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/20 15:52:33 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	repartiteur(char *str, char *strn, int dep)
{
	int i;
	int c;

	i = 0;
	c = 0;
	
	

	strn = str;
	printf("%s", strn);
	
	return (*strn);
}	


int		main(int argc, char *argv[])
{
	char *str;
	char str1[3];
	// char *str2[3];
	// char *str3[3];
	// char *str4[3];
		
	argc = 1;
	str = argv[argc];
	
	printf("%s", str);
	printf("\n");
	printf("\n");
	
	repartiteur(str, &str1[0], 0);
	printf("%s", str1);
	return 0;
}

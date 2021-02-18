/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 16:30:16 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/13 19:34:12 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> //printf
#include <unistd.h> //write

void	ft_putchar(char c) // afficher un caractere
{
	write(1, &c, 1);
}

void	ft_putstr(char *str) // afficher un mot d'une liste
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		printf("%c", str[i]);
		i++;
	}
}

int		ft_strlen(char *str) // compte le nombre de caractères d'une liste
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:32:45 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/18 18:11:52 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
			return 1;
		else 
			return (ft_fibonacci(index - 1) + ft_fibonacci( index - 2));
}

//04

#include <stdio.h>
int main()
{
    printf("%d", ft_fibonacci(7));
    return (0);
}
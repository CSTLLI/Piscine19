/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:48:12 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/18 12:50:00 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	if (nb == 0)
	return 1;
	else
		return (nb * ft_recursive_factorial(nb -1));
}

//01


#include <stdio.h>
int main()
{
    printf("%d", ft_recursive_factorial(5));
    return (0);
}
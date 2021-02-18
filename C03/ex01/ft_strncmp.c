/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:48:24 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/16 20:41:14 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < (n - 1))
	{
		i++;
	}
	if (n == 0)
		return (0);
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

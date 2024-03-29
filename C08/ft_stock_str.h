/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:39:26 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/25 14:39:28 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct    s_stock_str
{
    int size;
    char *str;
    char *copy;
}                t_stock_str;

#endif
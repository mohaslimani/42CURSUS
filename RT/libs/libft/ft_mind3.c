/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mind3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 08:40:12 by ibel-kha          #+#    #+#             */
/*   Updated: 2019/05/31 19:53:38 by ibel-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_mind3(double a, double b, double c)
{
	double	tmp;

	tmp = a < b ? a : b;
	return (tmp < c ? tmp : c);
}

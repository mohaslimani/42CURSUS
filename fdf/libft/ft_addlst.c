/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:38:17 by msoulaim          #+#    #+#             */
/*   Updated: 2019/04/19 19:52:07 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_addlst(t_list *alst, t_list *new)
{
	t_list	*o;

	o = alst;
	while (o->next)
	{
		o = o->next;
	}
	o->next = new;
}

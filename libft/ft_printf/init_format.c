/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 18:55:04 by dskrypny          #+#    #+#             */
/*   Updated: 2018/06/28 18:45:09 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_init_format(t_format **prop)
{
	(*prop)->width = 0;
	(*prop)->prec = 0;
	(*prop)->dot = 0;
	(*prop)->plus = 0;
	(*prop)->minus = 0;
	(*prop)->hash = 0;
	(*prop)->zero = 0;
	(*prop)->space = 0;
	(*prop)->color = 0;
	(*prop)->s_mod = 0;
	(*prop)->is_printed = 0;
}

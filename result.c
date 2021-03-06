/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:05:01 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/22 23:06:19 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		print_result(t_result *res)
{
	mvwprintw(res->win[1], 1, 1, "%55s", "");
	wrefresh(res->win[1]);
	mvwprintw(res->win[2], 1, 2, "%20s", "");
	mvwprintw(res->win[2], 2, 2, "%20s", "");
	mvwprintw(res->win[2], 1, 2, "Your name is: %s", res->name);
	mvwprintw(res->win[2], 2, 2, "Your result is: %d", res->result);
	wrefresh(res->win[2]);
}

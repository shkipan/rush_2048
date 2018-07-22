/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 12:24:14 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/22 12:38:30 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		init_help(WINDOW **win_info, WINDOW **win_champs)
{
	*win_info = newwin(4, 45, 1, 1);
	box(*win_info, 0, 0);
	wrefresh(*win_info);
	*win_champs = newwin(22, 20, 4, 25);
	box(*win_champs, 0, 0);
	wrefresh(*win_champs);
}

void		init_window(t_window *win_prop, WINDOW **win)
{
	win_prop->heigth = 9;
	win_prop->width = 25;
	win_prop->start_win.x = 4;
	win_prop->start_win.y = 1;
	*win = newwin(win_prop->heigth, win_prop->width,
			win_prop->start_win.x, win_prop->start_win.y);
	box(*win, 0, 0);
}

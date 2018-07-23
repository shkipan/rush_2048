/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 12:24:14 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/22 21:37:01 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		init_window(WINDOW **win, WINDOW **win_info, WINDOW **win_champs)
{
	int x;
	int y;

	getmaxyx(stdscr, y, x);
	*win = newwin(y, x, INFO_HEIGHT, CHAMPS_WIDTH);
	getmaxyx(stdscr, y, x);
	*win_info = newwin(INFO_HEIGHT, x - 1, 0, 0);
	box(*win_info, 0, 0);
	wrefresh(*win_info);
	*win_champs = newwin(y - INFO_HEIGHT, CHAMPS_WIDTH, 4, 0);
	box(*win_champs, 0, 0);
	wrefresh(*win_champs);
}

short		is_power2(int x)
{
	if (x == 0)
		return (0);
	while (x != 1)
	{
		if (x % 2)
			return (0);
		x /= 2;
	}
	return (1);
}

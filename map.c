/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkov <mvolkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 17:02:54 by mvolkov           #+#    #+#             */
/*   Updated: 2018/07/22 17:42:18 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		update_map(WINDOW *win_info, WINDOW *win_champs)
{
	int x;
	int y;

	wclear(win_info);
	wclear(win_champs);
	getmaxyx(stdscr, y, x);
	wresize(win_info, INFO_HEIGHT, x - 1);
	wresize(win_champs, y - INFO_HEIGHT, CHAMPS_WIDTH);
	box(win_info, 0, 0);
	box(win_champs, 0, 0);
	wrefresh(win_info);
	wrefresh(win_champs);
}

static void	print_lines(WINDOW *win, int y, int x, int count)
{
	while (count < (x - 1))
	{
		mvwprintw(win, 0, count, "-");
		mvwprintw(win, (y - 5) / 4, count, "-");
		mvwprintw(win, ((y - 5) / 4) * 2, count, "-");
		mvwprintw(win, ((y - 5) / 4) * 3, count, "-");
		mvwprintw(win, y - 5, count, "-");
		count++;
	}
}

static void	print_rows(WINDOW *win, int y, int x, int count)
{
	while (count < (y - 1))
	{
		mvwprintw(win, count, 0, "|");
		mvwprintw(win, count, (x - CHAMPS_WIDTH) / 4, "|");
		mvwprintw(win, count, ((x - CHAMPS_WIDTH) / 4) * 2, "|");
		mvwprintw(win, count, ((x - CHAMPS_WIDTH) / 4) * 3, "|");
		mvwprintw(win, count, x - CHAMPS_WIDTH - 1, "|");
		count++;
	}
}

void		draw_map(WINDOW *win)
{
	int x;
	int y;
	int count;

	getmaxyx(stdscr, y, x);
	wclear(win);
	if (y < 10 || x < 33)
	{
	}
	count = 0;
	print_lines(win, y, x, count);
	count = 0;
	print_rows(win, y, x, count);
	wrefresh(win);
}

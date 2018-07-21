/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:57:26 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/21 13:10:01 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	init_window(t_window *win_prop)
{
	win_prop->heigth = 12;
	win_prop->width = 12;
	win_prop->start_win.x = 1;
	win_prop->start_win.y = 1;
}

void	hook_keys(int key, WINDOW *win, int numbers[4][4])
{
	if (key == KEY_UP)
		move_up(win);
	if (key == KEY_DOWN)
		move_down(win);
	if (key == KEY_LEFT)
		move_left(win);
	if (key == KEY_RIGHT)
		move_right(win);
	print_numbers(win, numbers);
	wrefresh(win);
}

int		main(void)
{
	WINDOW		*win;
	t_window	win_prop;
	int			numbers[4][4];
	int			key;

	initscr();
	cbreak();
	noecho();
	init_window(&win_prop);
	win = newwin(win_prop.heigth, win_prop.width,
			win_prop.start_win.x, win_prop.start_win.y);
	box(win, 0, 0);
	create_numbers(numbers);
	print_numbers(win, numbers);
	keypad(win, 1);
	while ((key = wgetch(win)) != 27)
		hook_keys(key, win, numbers);
	endwin();
	return (0);
}

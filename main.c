/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:57:26 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/21 20:40:05 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void		init_window(t_window *win_prop)
{
	win_prop->heigth = 10;
	win_prop->width = 20;
	win_prop->start_win.x = 1;
	win_prop->start_win.y = 1;
}

static int		end_game(int numbers[4][4])
{
	short i;
	short j;
	short count;
	short max;

	count = 0;
	max = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (numbers[i][j] != 0)
				count++;
			if (numbers[i][j] > max)
				max = numbers[i][j];
		}
	}
	if (count == 16)
		return (1);
	if (max == END_GAME)
		return (2);
	return (0);
}

static int		hook_keys(int key, WINDOW *win, int numbers[4][4])
{
	if (key == KEY_UP)
		move_up(numbers);
	if (key == KEY_DOWN)
		move_down(numbers);
	if (key == KEY_LEFT)
		move_left(numbers);
	if (key == KEY_RIGHT)
		move_right(numbers);
	if (end_game(numbers))
		return (0);
	print_numbers(win, numbers);
	return (1);
}

int				main(void)
{
	WINDOW		*win;
	WINDOW		*win1;
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
	win1 = newwin(22, 20, 1, 25);
	box(win1, 0, 0);
	wrefresh(win1);
	create_numbers(numbers);
	print_numbers(win, numbers);
	keypad(win, 1);
	while ((key = wgetch(win)) != 27)
		if (!hook_keys(key, win, numbers))
			break ;
	endwin();
	system("leaks game_2048");
	return (0);
}

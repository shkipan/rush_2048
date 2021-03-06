/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:58:12 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/22 23:05:24 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "libft/libft.h"
# include <ncurses.h>
# include <time.h>
# include <fcntl.h>
# include <stdio.h>

# define INFO_HEIGHT 4
# define CHAMPS_WIDTH 30

enum	e_const
{
	WIN_VALUE = 8
};

typedef struct	s_result
{
	char		*name;
	int			numbers[4][4];
	WINDOW		*win[3];
	int			result;
	char		won;
}				t_result;

short			is_power2(int x);
char			*read_name(void);

void			add_number(int mas[4][4]);
void			create_numbers(t_result *res);
void			print_numbers(WINDOW *win, int mas[4][4]);
short			check_number(int mas[4][4], short x, short y);
void			copy_numbers(int src[4][4], int dst[4][4]);

void			init_window(WINDOW **win,
		WINDOW **win_info, WINDOW **win_champs);

int				move_up(int mas[4][4], t_result *res);
int				move_down(int mas[4][4], t_result *res);
int				move_left(int mas[4][4], t_result *res);
int				move_right(int mas[4][4], t_result *res);

void			print_result(t_result *res);
void			draw_map(WINDOW *win);
void			update_map(WINDOW *win_info, WINDOW *win_champs);

#endif

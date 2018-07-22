/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:58:12 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/22 15:24:02 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "libft/libft.h"
# include <ncurses.h>
# include <time.h>

enum	e_const
{
	WIN_VALUE = 2048
};

typedef struct	s_result
{
	int			result;
	WINDOW		*win[3];
	char		won;
}				t_result;

void			add_number(int mas[4][4]);
void			create_numbers(int mas[4][4], WINDOW *win);
void			print_numbers(WINDOW *win, int mas[4][4]);
short			check_number(int mas[4][4], short x, short y);
void			copy_numbers(int src[4][4], int dst[4][4]);

void			init_window(WINDOW **win,
		WINDOW **win_info, WINDOW **win_champs);

short			move_up(int mas[4][4]);
short			move_down(int mas[4][4]);
short			move_left(int mas[4][4]);
short			move_right(int mas[4][4]);

#endif

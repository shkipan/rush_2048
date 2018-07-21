/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:58:12 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/21 20:40:42 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "libft/libft.h"
# include <ncurses.h>
# include <time.h>

# define END_GAME 2048

typedef struct	s_point
{
	short		x;
	short		y;
}				t_point;

typedef struct	s_window
{
	short		heigth;
	short		width;
	t_point		start_win;
}				t_window;

void			add_number(int mas[4][4]);
void			create_numbers(int mas[4][4]);
void			print_numbers(WINDOW *win, int mas[4][4]);

void			move_up(int mas[4][4]);
void			move_down(int mas[4][4]);
void			move_left(int mas[4][4]);
void			move_right(int mas[4][4]);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:59:20 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/21 13:03:22 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	move_up(WINDOW *win)
{
	mvwprintw(win, 10, 4, "     ");
	mvwprintw(win, 10, 5, "UP");
}

void	move_down(WINDOW *win)
{
	mvwprintw(win, 10, 4, "     ");
	mvwprintw(win, 10, 4, "DOWN");
}

void	move_left(WINDOW *win)
{
	mvwprintw(win, 10, 4, "     ");
	mvwprintw(win, 10, 4, "LEFT");
}

void	move_right(WINDOW *win)
{
	mvwprintw(win, 10, 4, "     ");
	mvwprintw(win, 10, 4, "RIGHT");
}

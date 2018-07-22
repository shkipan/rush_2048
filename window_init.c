/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 12:24:14 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/22 15:28:08 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		init_window(WINDOW **win, WINDOW **win_info, WINDOW **win_champs)
{
	*win = newwin(9, 25, 4, 1);
	box(*win, 0, 0);
	wrefresh(*win);
	*win_info = newwin(4, 38, 1, 1);
	box(*win_info, 0, 0);
	wrefresh(*win_info);
	*win_champs = newwin(9, 14, 4, 25);
	box(*win_champs, 0, 0);
	wrefresh(*win_champs);
}

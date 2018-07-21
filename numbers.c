/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:15:43 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/21 13:08:47 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	create_numbers(int mas[4][4])
{
	short	i;
	short	j;
	short	num_pos1;
	short	num_pos2;
	short	x;

	srand(time(NULL));
	num_pos1 = rand() % 16;
	num_pos2 = rand() % 15;
	num_pos2 += (num_pos2 == num_pos1) ? 1 : 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			x = (rand() % 8 == 4) ? 4 : 2;
			mas[i][j] = (i * 4 + j == num_pos1 || i * 4 + j == num_pos2)
				? x : 0;
		}
	}
}

void	print_numbers(WINDOW *win, int mas[4][4])
{
	int		i;
	int		j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			mvwprintw(win, j + 1, i + 1, "%d", mas[i][j]);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:59:20 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/21 20:29:22 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	find_pair_up(int mas[4][4], int x, int y)
{
	short	step;

	step = 1;
	while ((y + step) < 4 && mas[x][y + step] == 0)
		step++;
	if ((y + step < 4) && mas[x][y + step] == mas[x][y])
	{
		mas[x][y] *= 2;
		mas[x][y + step] = 0;
	}
}

static void	push_all_up(int mas[4][4])
{
	short	step;
	short	i;
	short	j;

	j = -1;
	while (++j < 3)
	{
		i = -1;
		while (++i < 4)
		{
			step = 0;
			if (mas[i][j] == 0)
				while (step + j < 4 && !mas[i][j + step])
					step++;
			if (step && step + j < 4)
			{
				mas[i][j] = mas[i][j + step];
				mas[i][j + step] = 0;
			}
		}
	}
}

void		move_up(int mas[4][4])
{
	short	i;
	short	j;

	j = -1;
	while (++j < 3)
	{
		i = -1;
		while (++i < 4)
		{
			if (mas[i][j] != 0)
				find_pair_up(mas, i, j);
		}
	}
	push_all_up(mas);
	add_number(mas);
}

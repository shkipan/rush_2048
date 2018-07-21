/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:31:08 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/21 20:40:40 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	find_pair_right(int mas[4][4], int x, int y)
{
	short	step;

	step = 1;
	while ((x - step) >= 0 && mas[x - step][y] == 0)
		step++;
	if ((x - step >= 0) && mas[x - step][y] == mas[x][y])
	{
		mas[x][y] *= 2;
		mas[x - step][y] = 0;
	}
}

static void	push_all_right(int mas[4][4])
{
	short	step;
	short	i;
	short	j;

	i = 4;
	while (--i >= 0)
	{
		j = -1;
		while (++j < 4)
		{
			step = 0;
			if (mas[i][j] == 0)
				while (i - step >= 0 && !mas[i - step][j])
					step++;
			if (step && i - step >= 0)
			{
				mas[i][j] = mas[i - step][j];
				mas[i - step][j] = 0;
			}
		}
	}
}

void		move_right(int mas[4][4])
{
	short	i;
	short	j;

	i = 4;
	while (--i >= 0)
	{
		j = -1;
		while (++j < 4)
		{
			if (mas[i][j] != 0)
				find_pair_right(mas, i, j);
		}
	}
	push_all_right(mas);
	add_number(mas);
}

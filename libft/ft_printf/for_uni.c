/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sym.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 19:49:25 by dskrypny          #+#    #+#             */
/*   Updated: 2018/06/28 20:43:28 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	fill_tab(char tab[4][9], char *s, int n, int size)
{
	int i;
	int j;
	int count;

	j = size - 1;
	while (j >= 0)
	{
		i = 0;
		count = (j == 0) ? 8 - (size + 1) : 6;
		while (i < count && n - 1 >= 0)
		{
			tab[j][7 - i] = s[n - 1];
			i++;
			n--;
		}
		j--;
	}
}

int		select_size(int n)
{
	if (n < 8)
		return (1);
	if (n <= 11)
		return (2);
	if (n > 11 && n <= 16)
		return (3);
	if (n > 16)
		return (4);
	return (0);
}

void	print_uni(char *s)
{
	char	res[4][9];
	int		size;
	int		i;
	int		j;
	int		n;

	n = ft_strlen(s);
	size = select_size(n);
	i = -1;
	while (++i < size)
	{
		j = 0;
		res[i][j] = '1';
		while (++j < size)
			res[i][j] = (i == 0) ? '1' : '0';
		while (j < 8)
			res[i][j++] = '0';
		res[i][j] = '\0';
	}
	fill_tab(res, s, n, size);
	i = -1;
	while (++i < size)
		ft_putchar(ft_atoi_bin(res[i]));
}

void	create_uni(char *s, int c)
{
	if (ft_strlen(s) < 8)
		write(1, &(c), 1);
	else
		print_uni(s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 22:04:48 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/22 23:07:23 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_error(char *error)
{
	ft_printf(error);
	exit(1);
}

char	*read_name(void)
{
	char *line;

	line = NULL;
	while (!line || !line[0])
	{
		ft_printf("Enter Your name: ");
		if (get_next_line(0, &line) <= 0)
			ft_error("Reading error\n");
		if (line[0])
			return (line);
		free(line);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:22:52 by dskrypny          #+#    #+#             */
/*   Updated: 2018/06/02 18:23:59 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_cut(char *str, size_t size)
{
	char	*res;
	size_t	i;

	if (size == 0)
		return (str);
	i = 0;
	if (!(res = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

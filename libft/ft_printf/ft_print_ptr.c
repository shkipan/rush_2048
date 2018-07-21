/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 18:58:42 by dskrypny          #+#    #+#             */
/*   Updated: 2018/07/03 15:16:09 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*fill_str_ptr(t_format **prop, size_t length)
{
	char	*res;
	size_t	i;
	size_t	size;

	if ((*prop)->width == 0 || length > (*prop)->width)
		return (ft_strdup(""));
	size = (*prop)->width - length;
	res = (char *)malloc(sizeof(char) * (size - 1));
	i = 0;
	while (i < size)
	{
		res[i] = (!((*prop)->zero)) ? ' ' : '0';
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*create_ptr(t_format **p, char *a)
{
	char	*s;
	char	*temp;
	size_t	needed;

	s = (!ft_strcmp(a, "0") && !(*p)->prec && (*p)->dot) ?
		ft_strdup("") : ft_strdup(a);
	needed = ((*p)->prec) ? (*p)->prec : 0;
	while (needed && needed > ft_strlen(s))
	{
		temp = s;
		s = ft_strjoin("0", s);
		free(temp);
	}
	temp = s;
	s = ft_strjoin("0x", s);
	free(temp);
	return (s);
}

int		ft_print_ptr(t_format **prop, va_list argument)
{
	char	*s;
	char	*f;
	char	*temp;
	size_t	size;

	temp = ft_itoa_base(va_arg(argument, long long int), 16);
	s = create_ptr(prop, temp);
	free(temp);
	size = ft_strlen(s);
	f = fill_str_ptr(prop, size);
	size += ft_strlen(f);
	(*prop)->minus == 0 ? ft_putstr(f) : ft_putstr(s);
	(*prop)->minus == 1 ? ft_putstr(f) : ft_putstr(s);
	free(s);
	free(f);
	(*prop)->is_printed = 1;
	return (size);
}

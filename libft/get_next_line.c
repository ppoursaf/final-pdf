/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 17:53:05 by ppoursaf          #+#    #+#             */
/*   Updated: 2017/04/25 13:44:50 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		walk_the_line(char *stock, char **line)
{
	char	*eol;

	eol = ft_strchr(stock, '\n');
	if (eol)
	{
		eol[0] = '\0';
		*line = ft_strdup(stock);
		stock = ft_strncpy(stock, &eol[1], ft_strlen(&eol[1]) + 1);
		return (1);
	}
	if (ft_strlen(stock) > 0)
	{
		*line = ft_strdup(stock);
		*stock = '\0';
		return (1);
	}
	return (0);
}

int		get_next_line(int const fd, char **line)
{
	static char	*stock;
	int			ret;
	char		ptr[BUFF_SIZE + 1];
	char		*tmp;

	if (stock == NULL)
		stock = ft_strnew(0);
	if (fd < 0 || !stock || !line || BUFF_SIZE <= 0)
		return (-1);
	while (!(ft_strchr(stock, '\n')))
	{
		ret = read(fd, ptr, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			return (walk_the_line(stock, line));
		ptr[ret] = '\0';
		tmp = ft_strjoin(stock, ptr);
		free(stock);
		stock = tmp;
	}
	return (walk_the_line(stock, line));
}

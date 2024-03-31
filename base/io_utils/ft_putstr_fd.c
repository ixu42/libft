/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ixu <ixu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:18:53 by ixu               #+#    #+#             */
/*   Updated: 2024/03/31 21:13:31 by ixu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_base.h"

int	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
	{
		if (ft_putstr_fd("(null)", fd) == -1)
			return (-1);
		return (0);
	}
	if (write(fd, s, ft_strlen(s)) == -1)
		return (-1);
	return (0);
}

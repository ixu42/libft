/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ixu <ixu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:36:54 by ixu               #+#    #+#             */
/*   Updated: 2024/03/31 21:13:14 by ixu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_base.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}
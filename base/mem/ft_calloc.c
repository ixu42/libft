/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ixu <ixu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:15:26 by ixu               #+#    #+#             */
/*   Updated: 2024/03/31 21:14:23 by ixu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_base.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	max_size;

	if (count == 0 || size == 0)
		return (malloc(0));
	max_size = 4611686014132420608;
	if (count > max_size / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ixu <ixu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:08:12 by ixu               #+#    #+#             */
/*   Updated: 2024/03/31 21:15:59 by ixu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_base.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*ref;

	ptr = (char *)s;
	ref = ptr;
	while (*s)
	{
		s++;
		ptr++;
	}
	while (s != ref)
	{
		if (*s == (char)c)
			return (ptr);
		s--;
		ptr--;
	}
	if (*s == (char)c)
		return (ptr);
	return (NULL);
}

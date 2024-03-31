/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ixu <ixu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:39:27 by ixu               #+#    #+#             */
/*   Updated: 2024/03/31 21:15:56 by ixu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_base.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!haystack && needle && len == 0)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen(needle) > ft_strlen(haystack) || len < ft_strlen(needle))
		return (NULL);
	i = 0;
	while (i <= (len - ft_strlen(needle)))
	{
		if ((haystack[0] == needle[0])
			&& (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0))
			return ((char *)haystack);
		i++;
		haystack++;
	}
	return (NULL);
}

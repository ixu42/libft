/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ixu <ixu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:00:19 by ixu               #+#    #+#             */
/*   Updated: 2024/03/31 21:15:26 by ixu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_base.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	ptr = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

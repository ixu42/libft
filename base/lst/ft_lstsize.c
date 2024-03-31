/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ixu <ixu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:05:22 by ixu               #+#    #+#             */
/*   Updated: 2024/03/31 21:14:14 by ixu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_base.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = lst;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

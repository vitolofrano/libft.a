/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:40:30 by vlofrano          #+#    #+#             */
/*   Updated: 2023/01/20 00:45:57 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	int	i;

	if (!d && !s)
		return (d);
	if (s < d)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(char *)(d + i) = *(char *)(s + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int) n)
		{
			*(char *)(d + i) = *(char *)(s + i);
			i++;
		}
	}
	return (d);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:20:17 by seunam            #+#    #+#             */
/*   Updated: 2022/03/14 16:24:25 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	idx;

	idx = 0;
	if (src > dst)
	{
		while (idx < len)
		{
			dst[idx] = src[idx];
			idx ++;
		}
	}
	else
	{
		while (len)
		{
			dst[len - 1] = src[len - 1];
			len --;
		}
	}
	return (dst);
}

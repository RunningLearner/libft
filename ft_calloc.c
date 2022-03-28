/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:43:22 by seunam            #+#    #+#             */
/*   Updated: 2022/03/28 14:33:25 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			tot;
	size_t			idx;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	tot = count * size;
	idx = 0;
	while (idx < tot)
	{
		ptr[tot] = 0;
		idx ++;
	}
	return ((void *)ptr);
}

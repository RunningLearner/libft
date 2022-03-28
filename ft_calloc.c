/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:43:22 by seunam            #+#    #+#             */
/*   Updated: 2022/03/28 18:54:02 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	unsigned char	*uptr;
	size_t			tot;
	size_t			idx;

	tot = count * size;
	ptr = malloc(tot);
	if (!ptr)
		return (NULL);
	uptr = ptr;
	idx = 0;
	while (idx < tot)
	{
		uptr[idx] = 0;
		idx ++;
	}
	return (ptr);
}

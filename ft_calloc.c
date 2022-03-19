/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:43:22 by seunam            #+#    #+#             */
/*   Updated: 2022/03/18 17:43:26 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr
	size_t	tot;
	size_t	idx;

	if (!(ptr = malloc(nelem * elsize)))
		return (NULL);
	tot = nelem * elsize;
	idx = 0;
	while (idx < tot)
	{
		ptr[tot] = 0;
		idx ++;
	}
	return (ptr);
}

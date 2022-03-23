/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:46:00 by seunam            #+#    #+#             */
/*   Updated: 2022/03/23 18:31:51 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	idx;
	char	*ss;

	ss = (char *)s;
	len = 0;
	while (s[len])
		len ++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	idx = 0;
	while (ss[idx])
	{
		dup[idx] = ss[idx];
		idx ++;
	}
	dup[idx] = 0;
	return (dup);
}

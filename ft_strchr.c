/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:45:28 by seunam            #+#    #+#             */
/*   Updated: 2022/03/18 17:45:51 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchar(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return (s);
		s ++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		return (s);
	return (0);
}

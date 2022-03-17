#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n && s[idx] != 0)
	{
		if ((unsigned char)s[idx] == (unsigned char)c)
			return (&s[idx]);
		idx ++;
	}
	return (0);
}

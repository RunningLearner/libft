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

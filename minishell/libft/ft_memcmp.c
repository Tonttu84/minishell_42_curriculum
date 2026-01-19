#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while (n--)
		if (*ptr++ != *ptr1++)
			return ((*--ptr - *--ptr1));
	return (0);
}

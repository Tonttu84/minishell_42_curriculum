#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	s;

	s = 0;
	if (size <= 0)
	{
		return (ft_strlen(src));
	}
	while (s < size - 1 && src[s])
	{
		dst[s] = src[s];
		s++;
	}
	dst[s] = '\0';
	return (ft_strlen(src));
}

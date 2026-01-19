#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	while (n-- > 0)
		*dst_ptr++ = *src_ptr++;
	return (dest);
}


#include "libft.h"

//The change in calloc explodes something.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	bytes;

	if (!size || !nmemb)
		return (malloc(0));
	if (SIZE_MAX / size > nmemb)
	{
		bytes = size * nmemb;
		ptr = malloc(bytes);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, bytes);
		return (ptr);
	}
	return (NULL);
}

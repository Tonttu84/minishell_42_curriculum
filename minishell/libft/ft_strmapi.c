#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	c;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	c = ft_strlen(s);
	ptr = malloc(c + 1 * sizeof "");
	if (!ptr)
		return (NULL);
	c = 0;
	while (s[c])
	{
		ptr[c] = f(c, s[c]);
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}

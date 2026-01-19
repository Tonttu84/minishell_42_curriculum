#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 128 && c > -1)
		return (1);
	else
		return (0);
}

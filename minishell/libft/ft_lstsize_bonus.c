#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list			*last;
	unsigned int	size;

	size = 0;
	last = lst;
	while (last)
	{
		size++;
		last = last->next;
	}
	return (size);
}

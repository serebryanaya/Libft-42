#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*list_back;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		list_back = ft_lstnew(f(lst->content));
		if (!list_back)
			ft_lstclear(&new_list, del);
		ft_lstadd_back(&new_list, list_back);
		lst = lst->next;
	}
	return (new_list);
}

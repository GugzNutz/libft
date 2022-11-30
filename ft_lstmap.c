/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:39:13 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/30 17:49:52 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*sub;
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		sub = ft_lstnew(f(lst->content));//o meu sub guarda o conteudo da lista depois da funcao f
		if (sub == NULL)//se o conteudo for null apago e retorno
		{
			ft_lstclear(&sub, del);
			return (NULL);
		}
		ft_lstadd_back(&new, sub);//quando o meu sub nao e null adiciono a lst new
		lst = lst->next;//e avanco na lst antes de percorrer os mesmos passos antes
	}
	return (new);
}

	/*t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
*/
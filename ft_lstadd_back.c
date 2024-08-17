/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:21:28 by kevisout          #+#    #+#             */
/*   Updated: 2024/08/17 15:28:18 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst : L'adresse du pointeur vers le premier element de la liste
new : L'adresse du pointeur vers l'element a ajouter dans la liste

ft_lstadd_back ajoute un maillon a la fin de la liste.
Donc si ft_lstsize de la liste est egal a 3, apres ft_lstadd_back
ft_lstsize se la liste sera egal a 4.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	tmp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

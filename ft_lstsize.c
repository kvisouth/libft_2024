/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:11:00 by kevisout          #+#    #+#             */
/*   Updated: 2024/08/17 15:16:05 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_lstsize retourne la taille de la list 'lst'
Par taille on entent nombre de maillons dans la liste

On doit manipuler la liste avec une copie (tmp) pour ne pas perdre
le pointeur sur le debut de la liste (lst)
*/
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	tmp;

	i = 0;
	tmp = lst;
	while (!tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

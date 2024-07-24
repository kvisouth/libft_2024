/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:01:45 by kevisout          #+#    #+#             */
/*   Updated: 2024/07/24 23:15:45 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
ft_memmove c'est le frere de ft_memcpy, sauf que lui, gere les zones memoires
dest et src qui se chevauchent, la ou ft_memcpy ne veut absolument pas que ces
zones se chevauchent.

Pour verifier le chevauchement, on a notre condition IF compare la position
relative de dest et src dans la memoire. On verifie si l'adresse 'd' est
situee apres l'adresse 's' dans la memoire.

Dans le cas ou d > s, la destination se trouve APRES la source, donc si on
copie d'une maniere classique de gauche a droite, on risque de copier des
donnees qui on deja ete ecrasees par le debut de al copie, car d et s 
se chevauchent.
C'est pour ca qu'on copie de droite a gauche.

Sinon, dans la condition ELSE, c'est le cas ou ils ne chevauchent pas,
et donc on peut reprendre le raisonnement de ft_memcpy.
Donc une copie de gauche a droite.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	const char	*source;

	i = 0;
	destination = (char *)dest;
	source = (const char *)src;
	if (destination > source)
	{
		while (n > 0)
		{
			destination[n - 1] = source[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:41:26 by kevisout          #+#    #+#             */
/*   Updated: 2024/08/05 11:44:40 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strlcat concatene src a la fin de dest de maniere SAFE !
ft_strlcat est comme ft_strcat mais elle s'assure que la taille de dest ne 
soit pas depassee.

Si size est inf. ou egale a dest, ca veut dire qu'on a pas assez de place pour
y concatener src. Donc on retourne la longueur totale que la chaine aurait eue
si elle avait ete concatenee.

Sinon, on a assez de place, donc place a la concatenation !
On concatene jusqu'a size - 1 pour laisser 1 place pour le caractere '\0'.
Enfin, on retourne la longueur totale de la chaine concatenee.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}

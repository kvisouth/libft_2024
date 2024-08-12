/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:02:33 by kevisout          #+#    #+#             */
/*   Updated: 2024/08/12 16:35:26 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strrchr, agit comme ft_strchr, mais au lieu de retourner un pointeur vers
la PREMIERE occurence, il retourne un pointeur vers la DERNIERE occcurence
Sinon c'est exactement la meme fonction
*/
char	*ft_strrchr(const char *s, int c)
{
	const char	*s_cpy;

	if (c == '\0')
		return ((char *)s);
	s_cpy = s;
	while (*s)
		s++;
	while (*s != *s_cpy)
	{
		if ((char)*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

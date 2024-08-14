/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:38:51 by kevisout          #+#    #+#             */
/*   Updated: 2024/08/07 11:02:38 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_substr alloue avec malloc et retourne une chaine de caractere issue de 's'
Cette chaine de caractere commence a l'index 'start' et aura pour taille 'len'
Ne retourne NULL que si l'allocation echoue

Si start est un nombre plus grand que la longueur de 's', alors on lui
affecte la longueur de 's'.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s[i])
		i++;
	if (start >= i)
		start = i;
	i = 0;
	while (i < len && s[i])
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

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
ft_substr allour avec malloc et retourne une chaine de caractere issue de 's'
Cette chaine de caractere commence a l'index 'start' et aura pour taille 'len'
Ne retourne NULL que si l'allocation echoue

Si start est un nombre plus grand que la longueur de 's', alors on lui
affecte la longueur de 's'.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ret;

	i = 0;
	while (s[i])
		i++;
	if (start >= i)
		start = i;
	ret = malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < (unsigned int)len)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}

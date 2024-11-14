/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:27:37 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/14 09:56:47 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*result;

	i = start;
	j = 0;
	size = len;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > (ft_strlen(s + start)))
		len = ft_strlen(s + start);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	while (i < ft_strlen(s))
		result[j++] = s[i++];
	result[j] = 0;
	return (result);
}

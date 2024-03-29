/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welease <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:41:46 by welease           #+#    #+#             */
/*   Updated: 2020/11/07 17:59:16 by welease          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*result_string;

	index = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (result_string = ft_strdup(""));
	result_string = (char *)malloc(len + 1);
	if (result_string == NULL)
		return (NULL);
	while ((index < len))
		result_string[index++] = s[start++];
	result_string[index] = '\0';
	return (result_string);
}

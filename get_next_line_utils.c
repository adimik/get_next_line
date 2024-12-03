/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:20:08 by didimitr          #+#    #+#             */
/*   Updated: 2024/12/03 14:47:54 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	if (!s)
		return(0);
	while(s[i])
		i++;	
	return(i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_l;
	size_t	src_l;

	if (size == 0)
		return (ft_strlen(src));
	dest_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (size <= dest_l)
		return (size + src_l);
	i = 0;
	while (src[i] && i < size - dest_l - 1)
	{
		dst[dest_l + i] = src[i];
		i++;
	}
	dst[dest_l + i] = '\0';
	return (dest_l + src_l);
}
char	*ft_strcpy(char *dst, char const *src)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}
char	*strjoin(char const *s1, char const *s2)
{
	size_t len1;
	size_t len2;
	char	*result;

	if(!s1 && !s2)
		return(NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc(len1 + len2 + 1);
	if (!result)
		return(NULL);
	ft_strcpy(result, s1);
	ft_strlcat(result, s2, len1 + len2 + 1);
	return(result);
}

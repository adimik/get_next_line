/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:09:41 by didimitr          #+#    #+#             */
/*   Updated: 2024/12/03 17:55:05 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H 
#define GET_NEXT_LINE_H

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif

char *get_next_line(int fd);
char	*strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dst, char const *src);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(char const *s);
bool	ft_strchr(char const *s, size_t size);
void    str_fronttrim(char *s);
char    *strtrim(char *s);

#endif
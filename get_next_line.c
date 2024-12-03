/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:45:09 by didimitr          #+#    #+#             */
/*   Updated: 2024/12/03 18:00:41 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *strtrim(char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    while (s[i] != '\n')
    {
        s[i] = '\0';
        i--;
    }
    return(s);
}

bool    ft_strchr(char const *s, size_t size)
{
    size_t i;

    i = 0;
    while (i < size)
    {
        if (s[i] == '\n')
            return(true);
        i++;
    }
    return(false);
}

char *get_next_line(int fd)
{
	static char buf[BUFFER_SIZE];
	int	bytes_read;
	char *line;
    char *temp;

	line = NULL;
	line = malloc(1024);
    if (!line)
        return NULL;
    while ((bytes_read = read(fd, buf, BUFFER_SIZE)) > 0)
    {
        buf[bytes_read] = '\0';
        temp = line; 
        line = strjoin(line, buf);
        free(temp);
        if (ft_strchr(line, ft_strlen(line)) == true)
            break;
    }
    if (bytes_read <= 0 && ft_strlen(line) == 0)
    {
        free(line);
        return NULL;
    }
    return (strtrim(line));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:29:39 by gcoqueir          #+#    #+#             */
/*   Updated: 2023/05/16 12:52:50 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2);

char	*get_next_line(int fd)
{
	static char	*line;
	char		*temp;
	size_t		len;
	int			count;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	len = read(fd, temp, BUFFER_SIZE);
	if (len < 0)
		return (NULL);
	count = 0;
	while (temp[count] != '\0' || temp[count] != '\n' || count < BUFFER_SIZE)
		count++;
	line = ft_strjoin(line, temp);
	return (*&line);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:09:33 by dacaball          #+#    #+#             */
/*   Updated: 2023/12/09 00:40:27 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <time.h>

char	*ft_join_n_clear(char *buffer, char *temp)
{
	char	*aux;

	aux = ft_strjoin(buffer, temp);
	free(buffer);
	return (aux);
}

char	*ft_next_line(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (buffer[i] && (buffer[i] != '\n'))
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return (line);
}

char	*ft_read_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc((i + 2), sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*read_file(int fd, char *buffer)
{
	char	*temp;
	int		bytes_read;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	temp = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!temp)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		/*printf("READ FUNCTION USED! BYTES READ: %d\n", bytes_read);*/
		if (bytes_read == -1)
		{
			free(temp);
			free(buffer);
			return (NULL);
		}
		temp[bytes_read] = '\0';
		buffer = ft_join_n_clear(buffer, temp);
		if (ft_strchr(temp, '\n'))
			break ;
	}
	free (temp);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = read_file(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = ft_read_line(buffer[fd]);
	buffer[fd] = ft_next_line(buffer[fd]);
	return (line);
}

/*
//read(fd, 0, 0) < 0

void leaks()
{
	system("leaks -q test");
}

int main() 
{
	int fd = open("Mondongo2.txt", O_RDONLY);
	if (fd == -1)
	{
		return 1;
	}
	
	clock_t begin = clock();
	char *line;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s\n", line);
		if (line)
			free(line);
	}
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("TIME SPENT: %f", time_spent);
	atexit(leaks);
	close(fd);

	return 0;
}
*/
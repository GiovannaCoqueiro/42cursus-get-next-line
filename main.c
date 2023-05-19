#include "libft.h"

#include <stdio.h>
#include <fcntl.h>

char	*get_next_line(int fd);

int	main(int argc, char **argv)
{
	int	fd;

	if (argc < 2)
	{
		write (2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (1);
	printf("%s\n", get_next_line(fd));
	close(fd);
	return (0);
}

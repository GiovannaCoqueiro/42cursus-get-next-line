#include "get_next_line.h"

#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd1;
	int	fd2;
	int	fd3;

	fd1 = open("test.txt", O_RDONLY);
	if (fd1 < 0)
		return (1);
	fd2 = open("test2.txt", O_RDONLY);
	if (fd2 < 0)
	{
		close(fd1);
		return (1);
	}
	fd3 = open("test3.txt", O_RDONLY);
	if (fd3 < 0)
	{
		close(fd1);
		close(fd2);
		return (1);
	}
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd3));
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd3));
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd3));
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}

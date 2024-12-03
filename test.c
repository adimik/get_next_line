#include "get_next_line.h"

int	main(void)
{
	int	file;

	file = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
}

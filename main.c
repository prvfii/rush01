#include <unistd.h>

int validate_input(char *input);
void rush01(char *views);

int	main()
{
	if(ac == 2 && validate_input(av[1]))
	{
		rush01(av[1]);
	}else
		write(1, "Error\n", 6);
}

#include "shell.h"

int main(void)
{
	char *command = NULL;
	size_t len = 0;

	while(1)
	{
		printf("($) ");
		if(getline(&command, &len, stdin) == -1)
			break;
		printf("%s\n", command);
	}
	
	return (0);
}

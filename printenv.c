#include "main.h"

/**
 * printenv - prints the environment
 * Return: ...
 */
void printenv(){
    int iterator = 0;
    while (environ[iterator] != NULL)
		{
			write(STDOUT_FILENO, environ[iterator], strlen(environ[iterator]));
			write(STDOUT_FILENO, "\n", 1);
			iterator++;
		}
}

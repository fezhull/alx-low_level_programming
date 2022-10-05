#include "main.h"

/*
 * _strdup = returns apointer to a newly allocated
 * space in memory, which contains a copyof the
 * string givenas a parameter
 * @str:String to be copied
 *
 * Return: NULL in the case of error,pointer to allocated
 * space
 */

char *_strup(char *str)
{
	char *cpy;
	int index, len;

	if (str == Null)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';

	return (cpy);
}


#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string character
 * Return: On success points to the duplicate string
 * on failure returns NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/* check if malloc was successful */
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; str[i])
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
}

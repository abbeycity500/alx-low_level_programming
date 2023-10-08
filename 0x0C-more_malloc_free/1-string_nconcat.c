#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number 9f byte to concate of string s2
 *
 * Return: pointer to concateated string or null if it fails
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;
	umsigned int i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; *(len1 + s1); len1++)
		;
	for (len2 = 0; *(len2 + s2); len2++)
		;

	if (len2 < n)
		n = len2;

	ptr = malloc((len1 + n + 1) * (sizeof(char));

	if (!ptr)
	        return (NULL);

	for (i = 0; i < (len1 + n); i++)
	{
	         if (i < len1)
		         ptr[i] = s1[i];
	         else
		         ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';

	return (ptr);
}

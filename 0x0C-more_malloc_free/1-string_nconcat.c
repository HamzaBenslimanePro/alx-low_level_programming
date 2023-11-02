#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string to be in the allocated memory
 * @s2: the second string
 * @n: how much charater in s2 will be written
 * Return: the concatinated version of both string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len; int c; int x; int l; int j;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (c = 0; *s2 != '\0'; s2++)
		c++;//strlen s2

	for (l = 0; *s1 != '\0'; s1++)
                l++;//strlen s1

	if (n <= c)
		len = l + n;
	
	else
		len = l + c;

	str = malloc(sizeof(char) * l + 1);
	
	if (str == NULL)
		return(NULL);

	c = 0;
	while (j <= len)
	{
		if (j <= l)
			str[j] = s1[j];
		else if (j >= l)
		{
			str[j] = s2[c];
			c++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}

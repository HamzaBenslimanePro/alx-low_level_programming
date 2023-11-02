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
	unsigned int i = 0, j = 0, k = 0, l = 0; 
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	
	else
		l = i + n;

	str = malloc(sizeof(char) * l + 1);
	
	if (str == NULL)
		return(NULL);

	k = 0;
	while (j <= l)
	{
		if (j <= i)
			str[j] = s1[j];
		else if (j >= l)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}

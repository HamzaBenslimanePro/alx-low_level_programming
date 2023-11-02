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


	if (s1 == NULL)
		s1 = ""

	if (s2 == NULL)
		s2 = ""

	for (c = 0; *s2 != '\0'; s2++)
		c++;//strlen s2

	for (l = 0; *s1 != '\0'; s1++)
                l++;//strlen s1

	if (n <= c)
		len = l + n;
	
	else
		len = l + c;
	string_nconcat = malloc(sizeof(char) * l + 1);
	if (string_nconcat == NULL)
		return(NULL);

	for (x = 0 ; x < l ; x++)
	{
		string_nconcat[x] = s1[x];
	}
	while (j < n && s2[j] != '\0')
	{
		string_nconcat[x] = s2[j];
		j++;
		x++;
	}
	string_nconcat[x]='\0';

	return (string_nconcat);
}

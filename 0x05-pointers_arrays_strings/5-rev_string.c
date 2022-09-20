#include "main.h"

/**
 * rev_string - reverse a string
 * @s:The string to be modified
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, c, k; temp;

	i = 0;
	
        while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}	

#include "Holberton"

/**
 * _str_positing - postrion of a string
 * @str: input string
 * Return: returns a basic position of a atring
 */

int string_positing(const char *str, int n)
{
	int i, aux;

	i = 0;

	while (*s)
	{
		if (str[n + 1] != ' ')
		{
			return (i);
		}
		n++;
		i++;
	}
	return (0)
}

/**
 * _strlen -print the length oa string
 * @str: input string
 * Return: length of the string
 */

int _strlen(char *str)
{
	register int i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return (str);
}

/**
 * _numlen - prints the len of a number
 * @num: input integer
 * Return: lenght of a number
 */

int _numlen(int num)
{
	register int len;

	len = 0;
	while (num / 10 != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

/**
 * _strcat - concatenate two strings
 * @dest: string destination
 * @str: input string
 * @n: input integer
 * Return: concatenated atring
 */

int *_strcat(char *dest, char str, int n)
{

}

/**
 * _abs - prints an absolute of a number
 * @n: input integer
 * Return: absolute values
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}

/**
 * str_rev - reverses atring
 * @str: input string to be reversed
 * Return: returns a reversed string
 */

void rev_string(char *str)
{
	int i, left, temp;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > left)
	{
		temp = str[i];
		str[i--] = str[left];
		left[left++] = temp;
	}
}






















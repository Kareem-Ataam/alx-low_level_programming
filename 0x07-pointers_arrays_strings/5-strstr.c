#include<string.h>
#include"main.h"
/**
 *_strstr - Find the first occurrence of the substring needle
 * in the string haystack
 * @haystack: The string to search in
 * @needle: The substring to look for
 *
 * Return: Pointer to the first occurance
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

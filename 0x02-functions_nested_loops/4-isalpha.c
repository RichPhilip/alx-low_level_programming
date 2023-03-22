#include "main.h"
/**
 * _isalpha_checks for alphabet
 * @c: alpha to be be checked
 * Retrun: Returns 1 if c is a letter, lowercase or uppercas
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	
	}
	return (0);
}

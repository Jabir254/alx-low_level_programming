#include "main.h"
/**
* _isalpha - checks for alphabetical letters
* @c: a charter 
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

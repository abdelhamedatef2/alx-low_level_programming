#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing
 *
 * @str: str to hash
 *
 * Return: hash value of str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++) != 0)
hash = ((hash << 5) + hash) +c;

return (hash);
}

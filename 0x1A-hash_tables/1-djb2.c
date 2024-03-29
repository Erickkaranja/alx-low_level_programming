/**
*hash_djb2 - implementation of the dbj2 algorithm
*
*@str: string used to develop the value.
*
*Return: hash value.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
return (hash);
}
